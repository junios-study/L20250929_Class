#include <iostream>
#include <Windows.h>

using namespace std;
//[][][][] [][][][] []

// C++ -> class
// UE
struct FCharacter
{
	int X;
	int Y;
	char Shape;
};

FCharacter Player;
FCharacter Monster;

void RenderCharacter(FCharacter InData)
{
	COORD Position;
	Position.X = InData.X;
	Position.Y = InData.Y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Position);
	cout << InData.Shape;
}
//·»´õ
//·»´õ ¸ðµç Ä³¸¯ÅÍ¸¦ 
void Render()
{
	//for
	//{
	//	RenderCharacter(Player);
	//}
	RenderCharacter(Player);
	RenderCharacter(Monster);
}

//entrypoint
int main()
{
	Player.X = 1;
	Player.Y = 1;
	Player.Shape = 'P';

	Monster.X = 10;
	Monster.Y = 10;
	Monster.Shape = 'M';

	Render();



	return 0;
}
