#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��ϰ�ӷ�����
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d",&a,&b);
//	sum = a + b;
//	printf("%d", sum);

/*	printf("%c\n", '\101'); 
��ӡ�ַ���ʱ��'\'����ŵ�����λ�˽���������\x30Ҳͬ����x'������ŵ���������16����������
����ʱϵͳ���Ƚ��˽�����ת��Ϊʮ��������101ת����Ϊʮ��������65��
���Ż��ӡ65�ڼ����������Ӧ��ASCII�룬���Ϊ��ĸ��A��*/

//strlen = string lengh  ,   strlen("abc")=3  ע�⣡��abc��Ĭ�����һ��\0
//strlen("abc") = strlen(��a',��b',��c��,��\0��) ע�⣡��\0����һ���©�����򳤶Ȳ�����������




//ѡ�����

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



//ѭ�����

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("д����%d\n", line);
//		line = line + 1;
//	}
//	if (line == 30000)
//	{
//		printf("��������");
//	}
//	return 0;
//}



//����

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



//����
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//char arr2[5] = { 'a','b','c' }; ����ȫ��ʼ����ʣ���Ԫ��Ĭ��Ϊ0  
	
	int i = 0;
	while (i < 10)
	{
		printf("%d\n",arr[i]);
		i++;
	}
	return 0;
}
//�ʿ��Կ���������ÿ��Ԫ��Ĭ�ϴ��±꣬��0��ʼ�Դ����ơ�