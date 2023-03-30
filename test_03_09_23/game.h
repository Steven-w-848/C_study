#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define Count 20

//初始化棋盘
void initboard(char board[ROWS][COLS], int rows, int cols,char set);

//打印棋盘
void displayboard(char board[ROWS][COLS], int row, int col);

//布置雷
void setmine(char board[ROWS][COLS], int row, int col);

//排查雷
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//计算周围雷的个数
int mine_count(char mine[ROWS][COLS], int x, int y);

