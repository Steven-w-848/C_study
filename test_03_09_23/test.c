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
	char mine[ROWS][COLS];   //��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS];   //����Ų�����׵���Ϣ
	//��ʼ������
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS,'*');	
	
	//������
	setmine(mine, ROW, COL);

	//��ӡ����	
	displayboard(show, ROW, COL);
	//displayboard(mine, ROW, COL);

	//�Ų���
	findmine(mine, show, ROW, COL);

}


int main()
{
	int input;
	srand((unsigned int)time(NULL));
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
			printf("����������������룺\n");
			break;
		}
	} while (input);
	return 0;
}