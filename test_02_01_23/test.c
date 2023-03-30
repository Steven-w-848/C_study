#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//复习加法程序
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d",&a,&b);
//	sum = a + b;
//	printf("%d", sum);

/*	printf("%c\n", '\101'); 
打印字符串时，'\'后接着的是三位八进制数，（\x30也同理，‘x'后面接着的两个数是16进制数，）
运行时系统会先将八进制数转换为十进制数，101转换后为十进制数的65，
接着会打印65在计算机中所对应的ASCII码，结果为字母‘A’*/

//strlen = string lengh  ,   strlen("abc")=3  注意！！abc后默认添加一个\0
//strlen("abc") = strlen(‘a',‘b',‘c’,‘\0’) 注意！‘\0’这一项不能漏，否则长度测出来是随机数




//选择语句

//int main()
//{
//	int input = 0;
//	printf("Yes or No ? (1/0?)");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//	    printf("Yes");
//	}
//	else 
//	{ 
//		printf("No"); 
//	}
//	return 0;
//}



//循环语句

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码%d\n", line);
//		line = line + 1;
//	}
//	if (line == 30000)
//	{
//		printf("烂熟于心");
//	}
//	return 0;
//}



//函数

//int Add (int z,  int y)
//{
//	int x = z + y;
//	return x;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,& b);
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}



//数组
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//char arr2[5] = { 'a','b','c' }; 不完全初始化，剩余的元素默认为0  
	
	int i = 0;
	while (i < 10)
	{
		printf("%d\n",arr[i]);
		i++;
	}
	return 0;
}
//故可以看出数组中每个元素默认带下标，从0开始以此类推。