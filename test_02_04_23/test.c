#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//练习：用三目操作符来比大小
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d", a > b ? a : b);
//    return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年");
//	if (age >= 18 && age <= 26) //注意！！需要同时满足的两个条件需要用逻辑与符号"&&"连接
                                //两个条件中只需要一个满足的情况用逻辑或符号"||"连接 
//		printf("青年");
//	return 0;
//}



//错误案例
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//		if (b == 2)
//			printf("呵呵");
//	else
//			printf("哈哈");
//
//	return 0;
//}
//else只与前面最近的if构成选择语句，本案例中默认34~37行中的内容为33行判断后的结果，
//因不满足a==1的条件，故程序运行时直接跳过34`37行中的内容。


//练习：输出0~100以内的奇数

//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 2)
//		{
//			printf("%d\n", i);
//			i++;
//		}
//		else
//			i++;
//	}
//	return 0;
//}
//本题也可以使用for语句来解决
//for (i = 0; i <= 100; i++)


//Switch语句    注意！！break的作用是跳出Switch的程序，若没有break，
//则程序会按顺序继续向后执行，例如输入5，则会打印星期五星期六星期天。注意！！switch可以嵌套
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//    }
//	return 0;
//}

//借用Switch语句中break特性的例子:

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//	}
//	return 0;
//}


