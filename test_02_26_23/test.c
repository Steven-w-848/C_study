#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>





//字符串反向排列函数程序
///////////////////////////////////////////////////////
//非递归方式：
//int string_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void string_reverse(char* str)
//{
//	int left = 0;
//	int right = string_strlen(str) - 1;
//	int tmp;
//	while (left < right)
//	{
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
// 
//int main()
//{
//	char arr[] = "abcdef";
//	scanf("%s", &arr);
//	string_reverse(arr);  //数组名arr是数组首个元素的地址
//	printf("%s", arr);
//	return 0;
//}

////////////////////////////////////////////////////////
//递归方式：
//int string_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void string_reverse(char* str)
//{
//	char tmp = *str;
//	int len = string_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (string_strlen(str + 1) >= 2)
//	{
//		string_reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
// 
//int main()
//{
//	char arr[] = "abcdef";
//	scanf("%s", &arr);
//	string_reverse(arr);  //数组名arr是数组首个元素的地址
//	printf("%s", arr);
//	return 0;
//}




//求一个整数各个位的数字之和的程序   (递归)
//int digit_sum(int n)
//{
//	if (n > 9)
//	{
//		return digit_sum(n / 10) + (n % 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int res = digit_sum(a);
//	printf("%d", res);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };      //完全初始化
//	int arr[10] = { 1,2,3,4,5 };                 //不完全初始化
//  int arr2[] = {1,2,3,4,5 };                   //不完全初始化
//  char ch1[] = "bit";               //数组内有四个元素
//  char ch2[] = {'b','i','t'}        //数组内有三个元素
//  printf("%s",strlen(ch1))          // 3
//  printf("%s",strlen(ch2))          // 随机值
//  '[] '  下标引用操作符
//  '%p' 打印地址(十六进制)
//	return 0;
//}

////一维数组在内存中是连续存放的
////随着数组下标的增长，地址是由低到高变化的
////数组名是数组首元素的地址


//int main()
//{
//	char arr1[3][4];   //二维数组的定义： 数据类型+数组名+[行数]+[列数]
//	int arr2[2][3] = { 1,2,3,4,5,6 };  //二维数组的初始化：一行一行地，从左往右地将初始化元素放入
	////不完全初始化时，自动补零
	//int arr3[3][4] = { {1,2},{3,4},{5,6} };//当定义二维数组时大括号包含大括号时，每个大括号看做一个行的一维数组
	//上面一行中行数3可以省略  //二位数组在定义时列数不能省略（存储时由于时连续存放，没有列数下一行存储地不明确）
	//二维数组的行号和列号的首个编号同样是从0开始
	//二位数组中元素的存储形式也是连续的


	//打印一个二维数组程序
	//int i, j;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr3[i][j]);
	//	}
	//	printf("\n");
	//}


 //   //运用地址打印
	//int i = 0;
	//int* p = &arr3[0][0];
	//for (i = 1; i < 13; i++)
	//{
	//	printf("%d ", *p);
	//	p++;
	//}


	//return 0;
//}


////冒泡排序程序
void bubble_sort(int arr[],int k)
{
	int i, j;
	for (i = 0; i < k - 1; i++)
	{
		for (j = 0; j < k - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 1,9,2,8,3,7,4,6,5,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	return 0;
}


//数组名是首元素地址，但有两个例外
//1.sizeof（数组名） -  数组名表示整个数组  -  计算的是整个数组的大小单位是字节
//2.&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址

//int main()
//{
//	int arr[10];
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	return 0;
//}
//根据上面函数的结果可以得出，当arr表示整个数组的时候虽然地址打印出来是首元素的地址，但＋1后实际地址增加了40位
//当arr单纯表示首元素地址时，＋1后实际地址增加4位