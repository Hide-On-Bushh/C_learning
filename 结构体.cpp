#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Struct �ṹ��ؼ��� Stu - �ṹ���ǩ struct Stu - �ṹ������
//struct Stu
//
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5]
//}s1,s2,s3;//3��s��ȫ�ֵĽṹ�����
//
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//����typedef����ֱ��ʹ��Stu
//
//int main()
//{
//	Stu s1 = {"Rose",24,"13888","male"};//�ֲ�����
//	return 0;
//}
//
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;//�ṹ���а����ṹ��
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "Hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };//�ṹ���а����ṹ��Ҳ��{}
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
// }
//
//typedef struct Stu 
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)//���ṹ��
//{
//	printf("name=%s\n", tmp.name);
//	printf("age=%d\n", tmp.age);
//	printf("tele=%s\n", tmp.tele);
//	printf("sex=%s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)//�ṹ���ַ����
//{
//	printf("name=%s\n", ps->name);//���ʵ�ַ
//	printf("age=%d\n", ps->age);
//	printf("tele=%s\n", ps->tele);
//	printf("sex=%s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "rose",24,"138888888","male" };
//	//��ӡ�ṹ������
//	//print1�ṹ�崫���˷ѿռ��ʱ��
//	//ָ���������ǽ�ʡ�ռ�
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//


//�����������������������ȫ��ͬ�����ͣ������ǷǷ���
//struct {
//	int a;
//	char c;
//}pa;
//struct {
//	int a;
//	char c;
//}*psa;
//int main()
//{
//	psa = &pa;
//	return 0;
//}


//���ڽṹ������ܷ�����Լ���
//struct Node {
//	int data;//������
//	/*struct Node n;*///���������ݹ飬�������ṹ��Node�����һ��Node�����������
//	struct Node* next;//ָ����----����Ӧ�ô��ָ����һ������ַ��ָ��
//};
//
//int main()
//{
//	return 0;
//}


//typedef�÷�
//typedef struct Node {
//	int data;//4
//	struct Node* next;
//}Node;
//
//int main()
//{
//	Node n1;
//	struct Node n2;//����������ʽ������//	return 0;
//}


//��ϰ ����ṹ���С
//struct S1 {
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d", sizeof(struct S1));//16 doubleռ�ĸ��ֽ� charռ1�� �˷������ֽڴ�12��ʼ����int��С
//}

//��ϰ   �ṹ��Ƕ��
//struct S2 {
//	char c1;
//	struct S1 s1;
//	double i;
//};
//printf("%d", sizeof(S2));//32


//#����Ĭ�϶�����λ1
//#pragma pack(1)
//struct s {
//	char c;
//	double d;
//};
//�����ڴ��С��Ϊ9
/*#pragma pack()*///ȡ��Ĭ�϶�����


//offset����ʹ�÷���
//#include <stddef.h>
//
//struct S {
//	char c;//ƫ����Ϊ0 ���ڴ濪ʼλ��Ϊ0�ĵط���ʼ�洢
//	int i;//ƫ����Ϊ4 ��Ͻṹ���С���㷽ʽ���
//	double d;//ƫ����Ϊ8
//};
//
//int main()
//{
//	//offsetof()����ṹ���Ա����ƫ�������ṹ�����֣���Ա������
//	printf("%d", offsetof(struct S, c));
//	return 0;
//}


// ���� - ������ - ������
//union Un {
//	char c;
//	int i;//ic����ͬһ��ַ ����ͬһʱ�̲���ͬʱ��
//};
//int main()
//{
//	union Un u;
//	printf("%d", sizeof(u));//4  ��СΪ������ʹ�С
//	return 0;
//}


//�жϴ�С��   ָ��ⷨ��������ⷨ

//int is_sys(int x)
//{
//	return *(char*)&x;//��ַǿ������ת�����ַ���ָ�룬����һ���ֽ�
//	//1-01 00 00 00
//}ָ��ⷨ

int is_sys(int x)
{
	union un {
		int i;
		char c;
	}u;
	u.i = x;
	//���� 1 С�� ��1��int�����charռ�ݵ�һ���ֽڷ����жϴ�С���ֽ���
	return u.c;
}

int main()
{
	int a = 1;
	int ret=is_sys(a);
	if (1 == ret)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}