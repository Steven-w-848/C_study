#pragma once
#include<stdio.h>

//���ŵĶ���
#define ROW 3
#define COL 3


//����������


//��ʼ�����̵ĺ���
void initboard(char board[ROW][COL], int row, int col);

//��ӡ���̵ĺ���
void displayboard(char board[ROW][COL], int row, int col);

//����ƶ�
void playermove(char board[][COL],int row,int col);

//��������
void computermove(char board[][COL], int row, int col);

//�ж���Ӯ
char iswin(char board[][COL], int row,int col);
//�������
//1.���Ӯ   - "*"
//2.����Ӯ   - "#"
//3.ƽ��     - "Q"
//4.������Ϸ - "C"
