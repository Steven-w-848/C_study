#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdio.h>

//int main()
//{
	////int a = 10;    //aռ�ĸ��ֽ�
	////int* pa = &a;  //�õ�����4���ֽ��е�һ���ֽڵĵ�ַ

	////int a = 0x11223344;
	////char* pa = &a;
	////*pa = 0;
	////��ָ���������Ϊchar����ʱ��ʹ��*pa�������ò��ı����ֵ��ʱ��ֻ�ܸı��һ���ֽ��д洢��ֵ
	////��ָ�����Ϊintʱ����ı�ȫ���ĸ��ֽ��д洢��ֵ


////// 1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��


	////int arr[10] = { 0 };
	////int* p = arr;
	////char* pa = arr;
	////printf("%p\n", p);
	////printf("%p\n",p+1);       //�����ַ����4λ
	////printf("%p\n",pa);
	////printf("%p\n", pa + 1);   //�����ַ����1λ

////// 2.ָ�����;����ˣ�ָ����һ�������߶�Զ
	    //(int����һ����4�ֽڣ�char������һ����1�ֽڣ�double������һ����8�ֽ�)



//////Ұָ��//////
	//int* p;   //�ֲ�����δ��ʼ����Ĭ��Ϊ���ֵ
	//*p = 20;  //�����p����һ��Ұָ��    //�Ƿ������ڴ�

////����֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
////ָ���ָ�������ǰ��������ָ��ָ��ͬһ��ռ�


//	return 0;
//}



//////����������ʵ��strlen
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


//////ָ�뷽��ʵ��strlen

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
