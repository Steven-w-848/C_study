#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//#define 定义宏

//#define Add(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 4*Add (4, 3)) ;
//	return 0;
//}
//注意！！定义宏之后电脑会将后面语句中的宏替换定义是的语句，
//若定义式写为#define Add(X,Y) X+Y 的话，将会执行4*4+3，即得到错误结果19

//打印地址
//printf("%p\n",&a)

//int* pa = &a;
//pa是用来存放地址的，在C语言pa叫做指针变量
//* 说明pa是指针变量
//int说明pa执行的对象是int类型的


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;  //解引用操作，*pa就是通过pa里面的地址，找到a
//	printf("%d\n", a);
//
//	return 0;
//}



//结构体指针

//struct stu 
//{
//	char name[20];
//	int age;
//	double score;
//};

//int main()
//{
//	struct stu s = { "张三", 20, 85.5 }; //结构体的创建和初始化
//	printf("1. %s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
//	struct stu* ps = &s;
//	printf("2. %s %d %f\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3. %s %d %f\n", ps->name, ps->age, ps->score);//结构体指针->成员变量名
//    return 0;
//}

//static修饰局部变量时，循环到static所在的局部变量时不会变成原来的值，而是顺着上一次的值的循环。
//被static修饰的局部变量不会因为生命周期的结束而销毁和重新赋值。
//static修饰的函数时，函数只能在当前文件中生效，不能在其他文件中调用


//练习题：判断一个整数是否能被5整除

int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 5 == 0)
		printf("Yes");
	else
		printf("No");

	return 0;
}