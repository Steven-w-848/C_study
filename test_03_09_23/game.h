#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define Count 20

//��ʼ������
void initboard(char board[ROWS][COLS], int rows, int cols,char set);

//��ӡ����
void displayboard(char board[ROWS][COLS], int row, int col);

//������
void setmine(char board[ROWS][COLS], int row, int col);

//�Ų���
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//������Χ�׵ĸ���
int mine_count(char mine[ROWS][COLS], int x, int y);

