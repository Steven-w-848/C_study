#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
//	//while���
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i ++ ;
//	}  //����������ʱ��������ѭ������Ϊcontinue�������Ǵ�while��ѭ�����ݿ������ص�
	   // �ڰ��е�while���ж������У�ʹ�ó���һֱ����i=5��ϴѭ���С�


	//��whileѭ���У�
	//break�������õ���ֹѭ����continue����������������ѭ����continue����Ĵ���
	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ����

	
//getchar��outchar
	//int ch = getchar();
	//printf("%s", ch);
	//putchar(ch);//���ߵĹ��ܶ�Ϊ���һ���ַ�



	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//��Ctrl+z����
	//EOF = end of file ����Ϊ�ļ�������־


	//char password[20] = { 0 };
	//printf("���������룺");
	//scanf("%s", password);    //password��������ǰ���������&
	//int tmp = 0;
	//while ((tmp=getchar())!='\n')//���������ڶ�����ַ�
	//{
	//	;
	//}
	//printf("��ȷ�����루Y/N����");
	//int ch = getchar();       
	////ע�⣡��getchar���յ�Ϊһ���ַ����洢ʱ��ASCIIֵ�洢����ǰ����������int
	//if (ch == 'Y')
	//	printf("ȷ�ϳɹ���");
	//else
	//	printf("ȷ��ʧ�ܣ�");





	return 0;
}