#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


//int main()
//{
	
	////��ϰ�����������м���ʾһ�仰
	//char arr1[] = "Welcome to the computer world!";
	//char arr2[] = "##############################";
	//int left = 0, right = (strlen(arr1)-1);
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	left++;
	//	right--;
	//	printf("%s\n", arr2);
	//	Sleep(50);      //˯��һ��ʱ��
	//	system("cls");   //�����Ļ
	//	//ע�⣡�� ������������������Ҫ����ͷ�ļ���windows.h��
	//}


	
	
	//��ϰ���û������¼
	//int i = 0;
	//char password[20] = { 0 };
	//for (i = 1; i < 4; i++)
	//{
	//	printf("���������룺");
	//	scanf("%s", password);
	//	if (strcmp(password, "123456") == 0)
	
	/*ע�⣡��
	strcmp���ڱȽ������ַ��������ݱȽϽ������������������ʽΪstrcmp(str1,str2)��
	��str1=str2���򷵻��㣻��str1<str2���򷵻ظ�������str1>str2���򷵻�����
	�Ƚ�ʱϵͳ�����αȽ������ַ��д�ǰ����ÿ���ַ���ASCII��ֵ�Ĵ�С*/

	//	{
	//		printf("��¼�ɹ���");
	//		break;
	//	}
	//	else
	//		printf("�������!\n");
	//}
	//if (i == 4)
	//	printf("��������ʧ�ܣ��˳���¼����");
	
	
//	return 0;
//}





/////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////��ϰ�� ��������Ϸ     �ǳ���Ҫ��������////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////


void menu()    //void�ǿ�����
{
	printf("####################################\n");
	printf("####################################\n");
	printf("############  1. PLAY   ############\n");
	printf("############  0. EXIT   ############\n");
	printf("####################################\n");
	printf("####################################\n");
}  //��Ϊ�����˵�������


void game()  //��Ϊ��Ϸ����
{
	int input = 0;
	int answer = rand() % 100 + 1;  //ȡģ100�õ�0-99�������ټ�һ�õ�1-100
	// "rand()"��Ҫ����ͷ�ļ�"<stdlib.h>"; rand������Ϊ��������ڼ�����н������Ϊ�����
	while (1)
	{
		printf("��²⣺");
		scanf("%d", &input);
		if (input < answer)
		{
			printf("��С����\n");
		}
		else if (input > answer)
		{
			printf("�´�����\n");
		}
		else
		{
			printf("��ϲ�㣬�¶�����\n");
			break;
		}
	}
}



int main()   //�����
{
	int input = 0;
	srand((unsigned int)time(NULL)); //��ʱ�����//���ڳ�ʼ���������������
	//��ʹ�õ�ǰʱ�䵱�����ӣ�ȷ�����ɵ���������ظ���
	//unsigned int�����ı����ʹӶ�ȥ��time������Ĳ�����null��ʾ��ָ��
	//"time����"��ҪӦ��ͷ�ļ�"<time.h>" ;  "srand()"��Ҫ����ͷ�ļ�"<stdlib.h>" 
	//�������ˣ�����

	do
	{
		menu(); //��ӡ�˵�
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
		default:  //��Switch��ʹ�ã�������ifѭ���е�else
			printf("ѡ�����������\n");
				break;
		}
	} while (input);  //���ü����������жϣ�0Ϊ�٣�1Ϊ�棬������Ĭ��Ϊ��

	return 0;
}