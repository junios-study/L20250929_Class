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

FCharacter Characters[3];

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
	for (int i = 0; i < 3; ++i)
	{
		RenderCharacter(Characters[i]);
	}
	//RenderCharacter(Player);
	//RenderCharacter(Monster);
}

//entrypoint
int main()
{
	//Player.X = 1;
	//Player.Y = 1;
	//Player.Shape = 'P';

	//Monster.X = 10;
	//Monster.Y = 10;
	//Monster.Shape = 'M';

	Characters[0].X = 1;
	Characters[0].Y = 1;
	Characters[0].Shape = 'P';

	Characters[1].X = 10;
	Characters[1].Y = 10;
	Characters[1].Shape = 'M';

	Characters[2].X = 5;
	Characters[2].Y = 5;
	Characters[2].Shape = 'M';

	Render();



	return 0;
}
