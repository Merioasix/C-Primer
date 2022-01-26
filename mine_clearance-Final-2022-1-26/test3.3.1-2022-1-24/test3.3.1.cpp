#include <iostream>
#include <vector>
#include <ctime>
#include "game.h"
using namespace std;
using std::vector;

void nume()
{
	cout << "**********************" << endl;
	cout << "*****1:Play game******" << endl;
	cout << "*****0:Exit     ******" << endl;
	cout << "**********************" << endl;
}

void game()
{
	char board[ROWS][COLS] = { 0 };
	char mine_board[ROWS][COLS] = { 0 };

	init_board(board,ROWS,COLS,'0');
	init_board(mine_board, ROWS, COLS, '*');

	/*display_board(board, ROW, COL);
	display_board(mine_board, ROW, COL);*/

	set_mine(board, ROW, COL);
	display_board(board, ROW, COL);
	find_mine(board,mine_board,ROW,COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		nume();
		cout << "Please enter your choose: ";
		cin >> input;
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			cout << "exit" << endl;
			break;
		default :
			cout << "input error,please enter again" << endl;
			break;
		}
	} while (input);


	system("pause");
	return 0;
}