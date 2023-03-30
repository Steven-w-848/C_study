#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdio.h>

//int main()
//{
	////int a = 10;    //a占四个字节
	////int* pa = &a;  //拿到的是4个字节中第一个字节的地址

	////int a = 0x11223344;
	////char* pa = &a;
	////*pa = 0;
	////当指针变量类型为char类型时，使用*pa来解引用并改变变量值的时候只能改变第一个字节中存储的值
	////而指针变量为int时，会改变全部四个字节中存储的值


////// 1.指针类型决定了：指针解引用的权限有多大


	////int arr[10] = { 0 };
	////int* p = arr;
	////char* pa = arr;
	////printf("%p\n", p);
	////printf("%p\n",p+1);       //结果地址加了4位
	////printf("%p\n",pa);
	////printf("%p\n", pa + 1);   //结果地址加了1位

////// 2.指针类型决定了，指针走一步，能走多远
	    //(int类型一步是4字节，char类型走一步是1字节，double类型走一步是8字节)



//////野指针//////
	//int* p;   //局部变量未初始化，默认为随机值
	//*p = 20;  //这里的p就是一个野指针    //非法访问内存

////当不知道p应该初始化为什么地址的时候，直接初始化为NULL
////指针和指针相减的前提是两个指针指向同一块空间


//	return 0;
//}



//////计数器方法实现strlen
//int string_len(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = string_len("abc");
//	printf("%d", len);
//	return 0;
//}


//////指针方法实现strlen

int string_len(char* str)
{
	int start = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - start);
}
int main()
{
	int len = string_len("abc");
	printf("%d", len);
	return 0;
}
