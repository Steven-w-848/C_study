#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//��ϰ������Ŀ���������ȴ�С
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
//		printf("δ����");
//	if (age >= 18 && age <= 26) //ע�⣡����Ҫͬʱ���������������Ҫ���߼������"&&"����
                                //����������ֻ��Ҫһ�������������߼������"||"���� 
//		printf("����");
//	return 0;
//}



//������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//		if (b == 2)
//			printf("�Ǻ�");
//	else
//			printf("����");
//
//	return 0;
//}
//elseֻ��ǰ�������if����ѡ����䣬��������Ĭ��34~37���е�����Ϊ33���жϺ�Ľ����
//������a==1���������ʳ�������ʱֱ������34`37���е����ݡ�


//��ϰ�����0~100���ڵ�����

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
//����Ҳ����ʹ��for��������
//for (i = 0; i <= 100; i++)


//Switch���    ע�⣡��break������������Switch�ĳ�����û��break��
//�����ᰴ˳��������ִ�У���������5������ӡ�����������������졣ע�⣡��switch����Ƕ��
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//    }
//	return 0;
//}

//����Switch�����break���Ե�����:

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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//	}
//	return 0;
//}


