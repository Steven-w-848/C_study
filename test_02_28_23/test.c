#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdlib.h>
#include<time.h>


//三子棋程序
//test.c   测试游戏的逻辑
//game.h   关于游戏相关的函数声明，符号声明头文件的包含
//game.c   游戏相关函数的实现

void menu()
{
	printf("*******************************************\n");	
	printf("*******************************************\n");
	printf("*************     1.play      *************\n");
	printf("*************     2.exit      *************\n");
	printf("*******************************************\n");
	printf("*******************************************\n");
}


void game()
{
	//存储数据 - 二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化空格   否则刚开始的时候会打印随机值
	initboard(board, ROW, COL);
	//打印棋盘 - 本质是打印数组的内容
	displayboard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//玩家下棋
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);

		//判断玩家是否赢
		ret = iswin(board,ROW,COL);
		if (ret != 'C')
			break;
		//电脑下棋
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);

		//判断电脑是否赢
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("//////////////////玩家赢/////////////////\n");
		displayboard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("//////////////////电脑赢/////////////////\n");
		displayboard(board, ROW, COL);
	}
	else
	{
		printf("//////////////////平局啦/////////////////\n");
		displayboard(board, ROW, COL);
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}

	} while (input);
	return 0;
}