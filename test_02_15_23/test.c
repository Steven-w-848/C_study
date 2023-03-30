#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//函数一定要先声明在使用
//函数的定义一般写在头文件中
//函数的嵌套调用是指一个函数的定义中调用了另一个函数（但不能在一个函数中定义另一个函数）
//函数的链式访问是指把一个函数的返回值作为另一个函数的参数
//链式访问示例：
//printf("%d",printf("%d",printf("%d",43)))
//冷知识，printf返回值为打印值字符的个数


//   //判断是否为素数的函数
//int is_prime(int b)
//{
//	int j;
//	for (j = 2; j <= sqrt(b); j++)
//	{
//		if ((b % j) == 0)
//			return 0;
//	}
//	return 1;
//}



//   //二分法查找的函数
//   //下面一行相当于 int binary_search(int* a, int b, int c)
//int binary_search(int a[], int b, int c)
//{
//	int min = 0, max = c - 1;
//	while (min <= max)
//	{
//		int mid = (max + min) / 2;
//		if ((a[mid]) < b)
//			min = mid + 1;
//		else if ((a[mid]) > b)
//			max = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}



int main()
{
	
	//int i;
	//int count = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (is_prime(i))
	//	{
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n共%d个", count);
	//  //与判断是否为素数函数对应


	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int key = 0;
	//printf("请输入需要查找的数：\n");
	//scanf("%d", &key);
	//int sz = sizeof(arr) / sizeof(arr[0]);  //得到元素的个数
	//！！注意，第60行中的内容不可以放在函数中，因为数组在传参的时候仅仅传递首元素的地址，而不是整个数组
	//int ret = binary_search(arr, key, sz);
	//if (ret == -1)
	//	printf("找不到");
	//else
	//	printf("找到了，下标为%d", ret);
	//与二分法查找函数对应




//	  //！！函数的集成
//#include "add.h"    //自定义头文件在引用时需要用""
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);



	//随便写的
	//int a = 0, b = 0;
	//printf("请输入金额：");
	//scanf("%d", a);
	//printf("请输入面额：");
	//scanf("%d",b);
	//int ret = b - a;
	//printf("应找零%d元", ret);





	return 0;
}