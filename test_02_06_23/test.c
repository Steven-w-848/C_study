#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
//forѭ��:   for(��ʼ�����֣������жϲ��֣��������֣�  �жϲ���Ϊ����Ĭ��Ϊ��
	//int i = 0;
	//for (i = 1; i <= 10; i++)
	//{
	//	if (i == 5)
	//		continue;    
	//	printf("%d", i);
	//}  //�������1234678910

	//int x = 0;
	//int y = 0;
	//for (; x < 3; x++)
	//{
	//	for (; y < 3; y++)
	//		printf("%d", y);
	//}
	//ע�⣡������������ӿ��Կ�������û�г�ʼ�����ֵ�����£�y��ʹ����ѭ��
	//����һ�ν���ѭ����ʱ���Իᱣ���ϴ�ѭ�������ֵ������ֱ������ѭ����

	
	//do while ���
	//int i = 0;
	//do
	//{
	//	printf("%d", i);
	//	i++;
	//} while (i <= 10);


	//��ϰ���׳�
	//int n = 0, i = 0, ret = 1;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	ret *= i;
	//}
	//printf("%d", ret);

    
	//��ϰ���׳˽��ף�1��+ 2! + 3! + ... + 10!
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
	//�ҵĵ�һ�γ��ԣ���������for��Ƕ�ף�����̫���ӣ�û�п��ǵ���n-1����* n = n!��һ�������

	//���ñ���������ٴγ���
	//int n = 0, i = 0, ret1 = 0, ret2 =1;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	ret2 *= i;
	//	ret1 += ret2;
	//}
	//printf("%d", ret1);



	//��ϰ�����ַ�����
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 0;
	//printf("������Ҫ���ҵ�Ŀ����");
	//scanf("%d", &k);
	////Ҫ���ҵ�����
	//int sz = sizeof(arr) / sizeof(arr[0]); //�����Ԫ�ظ���
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
	//		printf("�ҵ��ˣ�Ŀ�������±�Ϊ%d", mid);
	//		break;
	//	}

 //   }
	//if (left > right)
	//	printf("�޷��ҵ�");


	return 0;
}