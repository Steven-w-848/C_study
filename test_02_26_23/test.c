#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>





//�ַ����������к�������
///////////////////////////////////////////////////////
//�ǵݹ鷽ʽ��
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
//	string_reverse(arr);  //������arr�������׸�Ԫ�صĵ�ַ
//	printf("%s", arr);
//	return 0;
//}

////////////////////////////////////////////////////////
//�ݹ鷽ʽ��
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
//	string_reverse(arr);  //������arr�������׸�Ԫ�صĵ�ַ
//	printf("%s", arr);
//	return 0;
//}




//��һ����������λ������֮�͵ĳ���   (�ݹ�)
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
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };      //��ȫ��ʼ��
//	int arr[10] = { 1,2,3,4,5 };                 //����ȫ��ʼ��
//  int arr2[] = {1,2,3,4,5 };                   //����ȫ��ʼ��
//  char ch1[] = "bit";               //���������ĸ�Ԫ��
//  char ch2[] = {'b','i','t'}        //������������Ԫ��
//  printf("%s",strlen(ch1))          // 3
//  printf("%s",strlen(ch2))          // ���ֵ
//  '[] '  �±����ò�����
//  '%p' ��ӡ��ַ(ʮ������)
//	return 0;
//}

////һά�������ڴ�����������ŵ�
////���������±����������ַ���ɵ͵��߱仯��
////��������������Ԫ�صĵ�ַ


//int main()
//{
//	char arr1[3][4];   //��ά����Ķ��壺 ��������+������+[����]+[����]
//	int arr2[2][3] = { 1,2,3,4,5,6 };  //��ά����ĳ�ʼ����һ��һ�еأ��������ҵؽ���ʼ��Ԫ�ط���
	////����ȫ��ʼ��ʱ���Զ�����
	//int arr3[3][4] = { {1,2},{3,4},{5,6} };//�������ά����ʱ�����Ű���������ʱ��ÿ�������ſ���һ���е�һά����
	//����һ��������3����ʡ��  //��λ�����ڶ���ʱ��������ʡ�ԣ��洢ʱ����ʱ������ţ�û��������һ�д洢�ز���ȷ��
	//��ά������кź��кŵ��׸����ͬ���Ǵ�0��ʼ
	//��λ������Ԫ�صĴ洢��ʽҲ��������


	//��ӡһ����ά�������
	//int i, j;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr3[i][j]);
	//	}
	//	printf("\n");
	//}


 //   //���õ�ַ��ӡ
	//int i = 0;
	//int* p = &arr3[0][0];
	//for (i = 1; i < 13; i++)
	//{
	//	printf("%d ", *p);
	//	p++;
	//}


	//return 0;
//}


////ð���������
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


//����������Ԫ�ص�ַ��������������
//1.sizeof���������� -  ��������ʾ��������  -  ���������������Ĵ�С��λ���ֽ�
//2.&������ - ��������ʾ�������� - ȡ��������������ĵ�ַ

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
//�������溯���Ľ�����Եó�����arr��ʾ���������ʱ����Ȼ��ַ��ӡ��������Ԫ�صĵ�ַ������1��ʵ�ʵ�ַ������40λ
//��arr������ʾ��Ԫ�ص�ַʱ����1��ʵ�ʵ�ַ����4λ