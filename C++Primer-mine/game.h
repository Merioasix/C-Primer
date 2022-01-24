#ifndef _GAME_H_
#define _GAME_H_
#include <vector>
using std::vector;
using namespace std;

#define ROW 9
#define COL 9
#define EASY_COUNT 2

#define ROWS ROW + 2
#define COLS COL + 2

void init_board(char board[ROWS][COLS], int row, int col, char ret);
void display_board(char board[ROWS][COLS], int row, int col);
void set_mine(char board[ROWS][COLS], int row, int col);
void find_mine(char board[ROWS][COLS], char mine_board[ROWS][COLS], int row, int col);
#endif
