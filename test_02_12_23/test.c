#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



//！！！！写函数的格式：函数的返回类型 函数名 （函数参数，函数参数）
//调用函数的时候，主函数中调用函数时括号内的参数叫做实际参数（实参）
//在函数定义部分中括号里的参数叫做形式参数（形参）
//实参是真实传递给函数的参数，可以是常量、变量、表达式、函数
//形参只有在函数调用的过程中才实例化（分配内存单元），当函数调用完后就会自动销毁（生命周期与局部变量类似）


//返回两个数中最大值的函数
//int jget_max(int a, int b)
//{
//	int max =0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return max;
//}


//交换两个整形变量的值的函数
//void swap(int* pa, int* pb)          
///*当函数返回类型为void时，表示这个函数不返回任何值
//{
//	int c = 0;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//
//}
      //传址调用   （直接的调用变量的值为 传值调用 ）
      //传值调用时，函数的实参和形参分别占有不同的内存块，形参只是实参的一个复制，此时形参的改变不会对实参造成影响
      //而使用传址调用时，会对内存地址中的数据进行改变，故会对实参造成影响
//数组相当于地址，当实参和形参都用数组时，形参可以影响实参




int main()
{
	
	
	//计时关机程序
	//char input[20] = { 0 };
	//system("shutdown -s -t 300");    //需要引用头文件<stdlib.h>
	//again:
	//printf("请输入“我是猪”，否则电脑将在5分钟后关机\n");
	//scanf("%s", input);
	//if (strcmp(input, "我是猪") == 0)  //需要引用头文件<string.h>
	//	system("shutdown -a");
	//else
	//	goto again;
    //goto 用于复杂嵌套的时候来跳出多层循环
	//goto语句只能在一个函数中跳转，不能在多函数中间跳转


 //   char arr1 [20] = { 0 };
	//char arr2[] = "hello world";
	//strcpy(arr1, arr2);
	//printf("%s\n", arr1);
	// strcpy()函数用于复制一个数组中的元素并赋到另外一个数组中  此函数需要引用头文件<string.h>

	//char arr[] = "hello world";
	//memset(arr, 'x', 5);
	//printf("%s\n", arr);
	//memset(,,)用于重置内存，第一个内容是目标地址，第二个内容是用于替换的字符，
	//第三个内容是替换元素的个数（从前开始数）

	//int x = 0, y = 0;
	//scanf("%d%d", &x, &y);
	//int max = get_max(x, y);
	//printf("%d", max);         //与获取最大值函数对应

	//int a = 0, b = 0;
	//scanf("%d%d", &a, &b);
	//printf("转换前：a=%d，b=%d\n", a, b);
	//swap(&a, &b); //函数的调用    
	//printf("转换后：a=%d，b=%d\n", a, b);      //与交换两个整形变量中得值的函数对应


	int a = 0, b = 0;
	printf("请输入金额：");
	scanf("%d", &a);
	printf("请输入面额：");
	scanf("%d", &b);
	int ret = b - a;
	printf("应找零%d元", ret);



return 0;
}