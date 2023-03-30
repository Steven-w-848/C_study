#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




int main()
{


	//练习：三个数从大到小排列

	//int a = 0, b = 0, c = 0;
	//printf("请输入数字：");
	//scanf("%d%d%d", &a, &b, &c);
	//if (b >= a)
	//{
	//	if (c >= b)
	//		printf("从大到小依次为：%d、%d、%d", c, b, a);
	//	else if (c < a)
	//		printf("从大到小依次为：%d、%d、%d", b, a, c);
	//	else
	//		printf("从大到小依次为：%d、%d、%d", b, c, a);
	//}
	//if (a > b)
	//{
	//	if (c >= a)
	//		printf("从大到小依次为：%d、%d、%d", c, a, b);
	//	else if (c < b)
	//		printf("从大到小依次为：%d、%d、%d", a, b, c);
	//	else
	//		printf("从大到小依次为：%d、%d、%d", a, c, b);
	//}
	//上为我的第一次尝试，略显臃肿，可以在定义一个变量来用作直接换值会方便得多


	
	//练习：找出两个数中的最大公因数
	//int a = 0, b = 0;
	//printf("请输入：");
	//scanf("%d%d", &a, &b);
	//int max = 1;
	//if (a < b)
	//	max = a;
	//else
	//	max = b;
	//while (1)
	//{
	//	if ((a % max == 0) && (b % max == 0))
	//	{
	//		printf("最大公因数是%d", max);
	//		break;
	//	}
	//	max--;
	//}

	//上题可用辗转相除法解决：
	//int a = 0, b = 0, c = 0;
	//	printf("请输入：");
	//	scanf("%d%d", &a, &b);
	//	while (c = a % b)     //简化流程，直接在判定条件中给c赋值
	//	{
	//		a = b;
	//		b = c;
	//	}
	//	printf("最大公因数是%d", b);
	//	//辗转相除法即两个数先取模得到一个数，在用最开始两个数中较小的一个数
	//	//与刚才得到的那个数取模，再得到一个模的结果，重返往复，知道模的结果为零
	//	//那么前一次模的结果就是最开始两个数的最大公因数
	//  //注意!!辗转相除法无所谓输入时两个数的大小先后！

	//拓展： 最小公倍数= m*n/最大公约数








	return 0;
}