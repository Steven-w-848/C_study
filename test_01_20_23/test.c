#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//double num = 3.14;
	//printf("%d\n", sizeof(char));	//sizeof�Ĺ���Ϊ������ѡ������ռ�ÿռ�Ĵ�С
	//printf("Hello world\n\n" );
	//num = num + 1;
	//printf("%lf\n", num);
	//double˫���ȸ�������Ҫ��lf�������ȸ�������f����
	
	int a = 0;
	int b = 0;
    int c = 0;
	int sum = 0;
	scanf("%d %d %d", &a,&b,&c);
	sum = a+b+c;
	printf("%d\n",sum);
	
	return 0;
} 