#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 1;
	int j = 1;
	printf("-----------------------------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------------\n");
}


void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = Count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;
	int win = 0;
	while (win<row*col-Count)
	{
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("\n恭喜你被炸死啦！\n");
				displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = mine_count(mine, x, y);
				show[x][y] = count + '0';
				displayboard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标越界，请重新输入：\n");
		}
	}
	if (win == row * col - Count)
	{
		printf("\n真遗憾，你通关了。。。\n");
		displayboard(mine, ROW, COL);
	}
}


 static int mine_count(char mine[ROWS][COLS],int x, int y)//static使得修饰的函数只能在当前文件中生效
{
		return mine[x - 1][y - 1] +
			mine[x - 1][y] +
			mine[x - 1][y + 1] +
			mine[x][y - 1] +
			mine[x][y + 1] +
			mine[x + 1][y - 1] +
			mine[x + 1][y] +
			mine[x + 1][y + 1] - 8 * '0';
}