#include <iostream>
#include <Windows.h>
#include <conio.h>


using namespace std;

struct FCharacter
{
	int X;
	int Y;
	char Shape;
};

FCharacter Characters[3];

int KeyCode;

void Input()
{
	KeyCode = _getch();
}

void RenderCharacter(FCharacter InData)
{
	COORD Position;
	Position.X = (SHORT)InData.X;
	Position.Y = (SHORT)InData.Y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Position);
	cout << InData.Shape;
}


//·»´õ
//·»´õ ¸ðµç Ä³¸¯ÅÍ¸¦ 
void Render()
{
	for (int i = 0; i < 3; ++i)
	{
		RenderCharacter(Characters[i]);
	}
}

void Init()
{
	Characters[0].X = 1;
	Characters[0].Y = 1;
	Characters[0].Shape = 'P';

	Characters[1].X = 10;
	Characters[1].Y = 10;
	Characters[1].Shape = 'M';
}

void MovePlayer()
{
	if (KeyCode == 'w')
	{
		Characters[0].Y--;
	}
	else if (KeyCode == 's')
	{
		Characters[0].Y++;
	}
	else if (KeyCode == 'a')
	{
		Characters[0].X--;
	}
	else if (KeyCode == 'd')
	{
		Characters[0].X++;
	}
}

void MoveMonster()
{

}

void Tick()
{
	MovePlayer();
	MoveMonster();
}

int main()
{
	Init();

	while (true)
	{
		Input();
		Tick();
		Render();
	}

	return 0;
}
