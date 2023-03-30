#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdlib.h>
#include<time.h>


//���������
//test.c   ������Ϸ���߼�
//game.h   ������Ϸ��صĺ�����������������ͷ�ļ��İ���
//game.c   ��Ϸ��غ�����ʵ��

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
	//�洢���� - ��ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ���ո�   ����տ�ʼ��ʱ����ӡ���ֵ
	initboard(board, ROW, COL);
	//��ӡ���� - �����Ǵ�ӡ���������
	displayboard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//�������
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);

		//�ж�����Ƿ�Ӯ
		ret = iswin(board,ROW,COL);
		if (ret != 'C')
			break;
		//��������
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);

		//�жϵ����Ƿ�Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("//////////////////���Ӯ/////////////////\n");
		displayboard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("//////////////////����Ӯ/////////////////\n");
		displayboard(board, ROW, COL);
	}
	else
	{
		printf("//////////////////ƽ����/////////////////\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}