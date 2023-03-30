#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
//	//while语句
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i ++ ;
//	}  //本程序运行时将进入死循环，因为continue的作用是从while的循环内容框里跳回到
	   // 第八行的while的判断条件中，使得程序一直陷入i=5的洗循环中。


	//在while循环中，
	//break用于永久的终止循环，continue的作用是跳过本次循环中continue后面的代码
	//直接去判断部分，看是否进行下一次循环。

	
//getchar和outchar
	//int ch = getchar();
	//printf("%s", ch);
	//putchar(ch);//两者的功能都为输出一个字符



	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//按Ctrl+z结束
	//EOF = end of file ，意为文件结束标志


	//char password[20] = { 0 };
	//printf("请输入密码：");
	//scanf("%s", password);    //password数组名，前面无需添加&
	//int tmp = 0;
	//while ((tmp=getchar())!='\n')//清理缓冲区内多余的字符
	//{
	//	;
	//}
	//printf("请确认密码（Y/N）：");
	//int ch = getchar();       
	////注意！！getchar接收的为一个字符，存储时以ASCII值存储，故前面需用整形int
	//if (ch == 'Y')
	//	printf("确认成功！");
	//else
	//	printf("确认失败！");





	return 0;
}