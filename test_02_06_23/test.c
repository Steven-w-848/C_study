#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
//for循环:   for(初始化部分，条件判断部分，调整部分）  判断部分为空是默认为真
	//int i = 0;
	//for (i = 1; i <= 10; i++)
	//{
	//	if (i == 5)
	//		continue;    
	//	printf("%d", i);
	//}  //最终输出1234678910

	//int x = 0;
	//int y = 0;
	//for (; x < 3; x++)
	//{
	//	for (; y < 3; y++)
	//		printf("%d", y);
	//}
	//注意！！由上面的例子可以看到，在没有初始化部分的情况下，y即使跳出循环
	//在下一次进入循环的时候仍会保持上次循环过后的值，导致直接跳出循环。

	
	//do while 语句
	//int i = 0;
	//do
	//{
	//	printf("%d", i);
	//	i++;
	//} while (i <= 10);


	//练习：阶乘
	//int n = 0, i = 0, ret = 1;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	ret *= i;
	//}
	//printf("%d", ret);

    
	//练习：阶乘进阶，1！+ 2! + 3! + ... + 10!
 //   int n = 0, i = 0, ret1 = 1, ret2 =0;
	//scanf("%d", &n);
	//for (; n > 0; n --)
	//{
	//	for (i = 1, ret1 = 1; i <= n; i++)
	//	{
 //  			ret1 *= i;
	//	}
	//	ret2 += ret1;
	//}
	//printf("%d", ret2);
	//我的第一次尝试，用了两个for的嵌套，过程太复杂，没有考虑到（n-1）！* n = n!这一便捷条件

	//利用便捷条件的再次尝试
	//int n = 0, i = 0, ret1 = 0, ret2 =1;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	ret2 *= i;
	//	ret1 += ret2;
	//}
	//printf("%d", ret1);



	//练习：二分法查找
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 0;
	//printf("输入需要查找的目标数");
	//scanf("%d", &k);
	////要查找的数字
	//int sz = sizeof(arr) / sizeof(arr[0]); //数组的元素个数
	//int left  = 0;
	//int right = sz - 1;
	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] < k)
	//		left = mid + 1;
	//	else if (arr[mid] > k)
	//		right = mid - 1;
	//	else
	//	{
	//		printf("找到了，目标数的下标为%d", mid);
	//		break;
	//	}

 //   }
	//if (left > right)
	//	printf("无法找到");


	return 0;
}