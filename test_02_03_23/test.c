#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//#define �����

//#define Add(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 4*Add (4, 3)) ;
//	return 0;
//}
//ע�⣡�������֮����ԻὫ��������еĺ��滻�����ǵ���䣬
//������ʽдΪ#define Add(X,Y) X+Y �Ļ�������ִ��4*4+3�����õ�������19

//��ӡ��ַ
//printf("%p\n",&a)

//int* pa = &a;
//pa��������ŵ�ַ�ģ���C����pa����ָ�����
//* ˵��pa��ָ�����
//int˵��paִ�еĶ�����int���͵�


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;  //�����ò�����*pa����ͨ��pa����ĵ�ַ���ҵ�a
//	printf("%d\n", a);
//
//	return 0;
//}



//�ṹ��ָ��

//struct stu 
//{
//	char name[20];
//	int age;
//	double score;
//};

//int main()
//{
//	struct stu s = { "����", 20, 85.5 }; //�ṹ��Ĵ����ͳ�ʼ��
//	printf("1. %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
//	struct stu* ps = &s;
//	printf("2. %s %d %f\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3. %s %d %f\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա������
//    return 0;
//}

//static���ξֲ�����ʱ��ѭ����static���ڵľֲ�����ʱ������ԭ����ֵ������˳����һ�ε�ֵ��ѭ����
//��static���εľֲ�����������Ϊ�������ڵĽ��������ٺ����¸�ֵ��
//static���εĺ���ʱ������ֻ���ڵ�ǰ�ļ�����Ч�������������ļ��е���


//��ϰ�⣺�ж�һ�������Ƿ��ܱ�5����

int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 5 == 0)
		printf("Yes");
	else
		printf("No");

	return 0;
}