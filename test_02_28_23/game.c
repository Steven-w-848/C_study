#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


//��ʼ�����飨���̣�
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


//��ӡ����
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{		
		int j = 0;
		for(j = 0;j < col; j++)
		{ 
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");

	}
}


//����ƶ�
void playermove(char board[][COL], int row, int col)
{
	int x, y;
	printf("����ߣ�\n");
	while (1)
	{
		printf("��������������꣺");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����
			//�ж�Ŀ����û�б�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("������ռ�ã����������룺");
		}
		else
			printf("��������������������룡\n");
	}
}


//�����ƶ�
void computermove(char board[ROW][COL], int row, int col)
{
	printf("�����ߣ�\n");
	while (1)
	{	
		int x = rand() % row;
		int y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';

			break;
		}

	}
}


//�ж���Ӯ
char iswin(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] !=' ')
	{
		return board[0][0];
	}
	if(board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
	{
		return board[2][0];
	}
	//�ж�ƽ��
	int res = isfull(board,row,col);
	if (res == 1)
	{
		return 'Q';
	}
	return 'C';
}

//�ж�ƽ�ֺ���
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				if (board[i][j] == ' ')
				{
					return 0;
				}
			}
		}
		return 1;
}

