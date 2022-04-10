#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Struct 结构体关键字 Stu - 结构体标签 struct Stu - 结构体类型
//struct Stu
//
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5]
//}s1,s2,s3;//3个s是全局的结构体变量
//
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//加上typedef可以直接使用Stu
//
//int main()
//{
//	Stu s1 = {"Rose",24,"13888","male"};//局部变量
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
//	struct S s;//结构体中包含结构体
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "Hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };//结构体中包含结构体也用{}
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
// }
//
//typedef struct Stu 
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)//传结构体
//{
//	printf("name=%s\n", tmp.name);
//	printf("age=%d\n", tmp.age);
//	printf("tele=%s\n", tmp.tele);
//	printf("sex=%s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)//结构体地址传参
//{
//	printf("name=%s\n", ps->name);//访问地址
//	printf("age=%d\n", ps->age);
//	printf("tele=%s\n", ps->tele);
//	printf("sex=%s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "rose",24,"138888888","male" };
//	//打印结构体数据
//	//print1结构体传参浪费空间和时间
//	//指针的意义就是节省空间
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//


//编译器会把两个声明当成完全不同的类型，所以是非法的
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


//关于结构体变量能否包含自己？
//struct Node {
//	int data;//数据域
//	/*struct Node n;*///类似于死递归，不合理，结构体Node里包含一个Node，会变得无穷大
//	struct Node* next;//指针域----所以应该存放指向下一个结点地址的指针
//};
//
//int main()
//{
//	return 0;
//}


//typedef用法
//typedef struct Node {
//	int data;//4
//	struct Node* next;
//}Node;
//
//int main()
//{
//	Node n1;
//	struct Node n2;//两种命名方式都可以//	return 0;
//}


//练习 计算结构体大小
//struct S1 {
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d", sizeof(struct S1));//16 double占四个字节 char占1个 浪费三个字节从12开始计算int大小
//}

//练习   结构体嵌套
//struct S2 {
//	char c1;
//	struct S1 s1;
//	double i;
//};
//printf("%d", sizeof(S2));//32


//#设置默认对齐数位1
//#pragma pack(1)
//struct s {
//	char c;
//	double d;
//};
//现在内存大小就为9
/*#pragma pack()*///取消默认对齐数


//offset（）使用方方
//#include <stddef.h>
//
//struct S {
//	char c;//偏移量为0 从内存开始位置为0的地方开始存储
//	int i;//偏移量为4 结合结构体大小计算方式理解
//	double d;//偏移量为8
//};
//
//int main()
//{
//	//offsetof()计算结构体成员变量偏移量（结构体名字，成员变量）
//	printf("%d", offsetof(struct S, c));
//	return 0;
//}


// 联合 - 联合体 - 共用体
//union Un {
//	char c;
//	int i;//ic共用同一地址 ，但同一时刻不能同时用
//};
//int main()
//{
//	union Un u;
//	printf("%d", sizeof(u));//4  大小为最大类型大小
//	return 0;
//}


//判断大小端   指针解法和联合体解法

//int is_sys(int x)
//{
//	return *(char*)&x;//地址强制类型转换，字符型指针，访问一个字节
//	//1-01 00 00 00
//}指针解法

int is_sys(int x)
{
	union un {
		int i;
		char c;
	}u;
	u.i = x;
	//返回 1 小端 ，1在int型里，用char占据第一个字节返回判断大小端字节序
	return u.c;
}

int main()
{
	int a = 1;
	int ret=is_sys(a);
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}