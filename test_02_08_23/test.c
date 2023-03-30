#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


//int main()
//{
	
	////练习：从两边向中间显示一句话
	//char arr1[] = "Welcome to the computer world!";
	//char arr2[] = "##############################";
	//int left = 0, right = (strlen(arr1)-1);
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	left++;
	//	right--;
	//	printf("%s\n", arr2);
	//	Sleep(50);      //睡眠一段时间
	//	system("cls");   //清空屏幕
	//	//注意！！ 上面两个操作符均需要引用头文件“windows.h”
	//}


	
	
	//练习：用户密码登录
	//int i = 0;
	//char password[20] = { 0 };
	//for (i = 1; i < 4; i++)
	//{
	//	printf("请输入密码：");
	//	scanf("%s", password);
	//	if (strcmp(password, "123456") == 0)
	
	/*注意！！
	strcmp用于比较两个字符串并根据比较结果返回整数。基本形式为strcmp(str1,str2)，
	若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数
	比较时系统会依次比较两串字符中从前往后每个字符的ASCII码值的大小*/

	//	{
	//		printf("登录成功！");
	//		break;
	//	}
	//	else
	//		printf("密码错误!\n");
	//}
	//if (i == 4)
	//	printf("三次输入失败，退出登录程序");
	
	
//	return 0;
//}





/////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////练习： 猜数字游戏     非常重要！！！！////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////


void menu()    //void是空类型
{
	printf("####################################\n");
	printf("####################################\n");
	printf("############  1. PLAY   ############\n");
	printf("############  0. EXIT   ############\n");
	printf("####################################\n");
	printf("####################################\n");
}  //此为构建菜单栏函数


void game()  //此为游戏函数
{
	int input = 0;
	int answer = rand() % 100 + 1;  //取模100得到0-99的数，再加一得到1-100
	// "rand()"需要引用头文件"<stdlib.h>"; rand（）意为随机，但在计算机中结果往往为假随机
	while (1)
	{
		printf("请猜测：");
		scanf("%d", &input);
		if (input < answer)
		{
			printf("猜小啦！\n");
		}
		else if (input > answer)
		{
			printf("猜大啦！\n");
		}
		else
		{
			printf("恭喜你，猜对啦！\n");
			break;
		}
	}
}



int main()   //主框架
{
	int input = 0;
	srand((unsigned int)time(NULL)); //“时间戳”//用于初始化随机数生成器。
	//它使用当前时间当做种子，确保生成的随机数不重复。
	//unsigned int用来改变类型从而去掉time（）里的参数，null表示空指针
	//"time（）"需要应用头文件"<time.h>" ;  "srand()"需要引用头文件"<stdlib.h>" 
	//背就完了！！！

	do
	{
		menu(); //打印菜单
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
				break;
		default:  //在Switch中使用，类似于if循环中的else
			printf("选择错误，请重试\n");
				break;
		}
	} while (input);  //巧用计算机中真假判断，0为假，1为真，其余数默认为真

	return 0;
}