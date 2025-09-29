#include <iostream>

using namespace std;

//entrypoint
int main()
{
	//[1][][][]			[2][][][]      [][][][][][][][]   [][][][][][][][]
	//Player							P				  PP
	//0x010101 + 0		0x010101 + 1	0x20202(&P)			 0x303030(&PP)
	//Player[0]			Player[1]
	//*P				*(P+1)

	//[][][][][][][][]
	//PPP
	//0x3030404(&PPP)

	int Player[2] = { 1, 2 };
	int* P = Player;
	//int** PP = &P;
	//int*** PPP = &PP;

	//cout << &P << endl;
	//cout << PP << endl;

	cout << Player[1] << endl;
	cout << *(Player+1) << endl;
	cout << *(P+1) << endl;


	return 0;
}
