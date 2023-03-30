#pragma once
#include<stdio.h>

//符号的定义
#define ROW 3
#define COL 3


//函数的声明


//初始化棋盘的函数
void initboard(char board[ROW][COL], int row, int col);

//打印棋盘的函数
void displayboard(char board[ROW][COL], int row, int col);

//玩家移动
void playermove(char board[][COL],int row,int col);

//电脑下棋
void computermove(char board[][COL], int row, int col);

//判断输赢
char iswin(char board[][COL], int row,int col);
//四种情况
//1.玩家赢   - "*"
//2.电脑赢   - "#"
//3.平局     - "Q"
//4.继续游戏 - "C"
