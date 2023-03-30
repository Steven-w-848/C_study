#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//double num = 3.14;
	//printf("%d\n", sizeof(char));	//sizeof的功能为测量所选内容所占用空间的大小
	//printf("Hello world\n\n" );
	//num = num + 1;
	//printf("%lf\n", num);
	//double双精度浮点数需要用lf，单精度浮点数用f即可
	
	int a = 0;
	int b = 0;
    int c = 0;
	int sum = 0;
	scanf("%d %d %d", &a,&b,&c);
	sum = a+b+c;
	printf("%d\n",sum);
	
	return 0;
} 