#include <iostream>
#include "game.h"

void init_board(char board[ROWS][COLS],int row,int col,char ret)
{
	
	
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			board[i][j] = ret;
		}
	}


}

void display_board(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0 ;i <= col;i++)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = 1;i <= row;i++)
	{
		cout << i  << " ";
		for (int j = 1;j <= col;j++)
		{
			cout << board[i][j]<<" ";
		}
		cout << endl;
	}


}

void set_mine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;

	int count = EASY_COUNT;

	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}

}

int check_mine(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1] + board[x - 1][y] +
		   board[x - 1][y + 1] + board[x][y - 1] +
		   board[x][y + 1] + board[x + 1][y - 1] +
		   board[x + 1][y] + board[x + 1][y + 1] - 8 * '0';
}

//以下为递归版本还未完成
int check_mine_recursion(char board[ROWS][COLS], char mine_board[ROWS][COLS],int x, int y)
{

	 int count =   board[x - 1][y - 1] + board[x - 1][y] +
			  board[x - 1][y + 1] + board[x][y - 1] +
			  board[x][y + 1] + board[x + 1][y - 1] +
			  board[x + 1][y] + board[x + 1][y + 1] - 8 * '0';
	
	 if (count == 0)
	 {
		 mine_board[x][y] = count + '0';
		
		 return check_mine_recursion(board, mine_board, x - 1, y);
		 display_board(mine_board, ROW, COL);
	 }


}




void find_mine(char board[ROWS][COLS],char mine_board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	
	while(win<row*col-EASY_COUNT)
	{ 
		cout << "Please enter x and y: ";
		cin >> x >> y;
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x][y] != '0')
			{
				cout << "Sorry you were killed" << endl;
				display_board(board, row, col);
				break;
			}
			else
			{
				int count = check_mine(board,x, y);
				mine_board[x][y] = count + '0';
				display_board(mine_board, row, col);
				win++;
			}
		}
		else
		{
			cout << "x or y are error,Please enter them again:";
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		cout << "congratulations successful mine clearance" << endl;
		display_board(board, row, col);
	}
	
	
}