#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


//初始化数组（棋盘）
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


//打印棋盘
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


//玩家移动
void playermove(char board[][COL], int row, int col)
{
	int x, y;
	printf("玩家走：\n");
	while (1)
	{
		printf("请输入下棋的坐标：");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋
			//判断目标有没有被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标已占用，请重新输入：");
		}
		else
			printf("坐标输入错误，请重新输入！\n");
	}
}


//电脑移动
void computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑走：\n");
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


//判断输赢
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
	//判断平局
	int res = isfull(board,row,col);
	if (res == 1)
	{
		return 'Q';
	}
	return 'C';
}

//判断平局函数
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

