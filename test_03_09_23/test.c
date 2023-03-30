#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("***********************************\n");
	printf("***********************************\n");
	printf("************   1.Play   ***********\n");
	printf("************   0.Exit   ***********\n");
	printf("***********************************\n");
	printf("***********************************\n");
}



void game()
{
	char mine[ROWS][COLS];   //存放布置好的雷的信息
	char show[ROWS][COLS];   //存放排查出的雷的信息
	//初始化棋盘
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS,'*');	
	
	//布置雷
	setmine(mine, ROW, COL);

	//打印棋盘	
	displayboard(show, ROW, COL);
	//displayboard(mine, ROW, COL);

	//排查雷
	findmine(mine, show, ROW, COL);

}


int main()
{
	int input;
	srand((unsigned int)time(NULL));
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
			printf("输入错误，请重新输入：\n");
			break;
		}
	} while (input);
	return 0;
}