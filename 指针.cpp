#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*printf("%d\n",sizeof(char *));
	printf("%d\n",sizeof(int *));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(double*));*///都是4字节
	return 0;
}

int main()
{
	int a = 0x11223344;
	//int* pa = &a;//地址内容 44 33 22 11
	//*pa = 0;//地址内容四个字节会变成 00 00 00 00 *int访问四个字节
	char* pc = &a;
	*pc = 0;//地址内容变成 00 33 22 11 指针类型决定解引用访问空间大小
	return 0;
}

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);//地址加4
	printf("%p\n", pc);
	printf("%p\n", pc+1);//地址加1
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;//数组名-首元素地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;//数组中每个数字改成1
	}
	return 0;
}

int main()
{
	int a;//局部变量不初始化，默认随机值
	int* p;//局部的指针变量，初始化随机值
	*p = 20;//随便赋值
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		p++;//当指针指向的范围超出数组arr范围时，p就是野指针
	}
	return 0;
}

指针指向空间释放

int * test()
{
	int a = 10;//一旦出test，a的地址就不是我们的了，空间已经被释放
	return &a;
}

int main()
{
	int*p=test();//接受到的是返回的地址
	*p = 20;//想要把10改成20已经找不到原本a的地址了，地址已经在出函数返回给系统了
	return 0;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		printf(" %d", *p);
		p++;
	}
	return 0;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d", &arr[9] - &arr[0]);//指针减指针得到的是元素个数
	return 0;
}

计算字符串长度，用指针的方法

int my_strlen(char* len)
{
	char* start = len;//len指向字符串起始位置
		char* end = len;
		while (*end != '\0')
		{
			end++;
		}
		return end-start;//指针减指针等于元素个数
}

int main()
	{
	//strlen - 求字符串长度
	char arr[] = "bit";
	int len=my_strlen(arr);
	printf("%d", len);
	return 0;
	}

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//-首元素地址
	printf("%p\n", arr+1);//+4

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);//+4

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);//相差28 16进制就等于32+8

	//&arr - &数组名 - 这里的数组名不是首元素地址，表示整个数组 - &数组名 取出的是整个数组的地址
	//sizeof(arr) - sizeof(数组名) - 数组名是整个数组 - sizeof(数组名)表示整个数组的大小
	return 0;
}

数组和指针的关系
int main()
{
	int arr[10] = { 0 };
	int* p = arr;//首元素地址放到指针p里
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i)=i;//p+i相当于元素地址，加*解引用,再赋值i，相当于把数组赋值0——i
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%p===============%p\n", p + i, &arr[i]);//指针p加整数i   打印下标i的地址  两种形式都是打印地址
	//}
}

int main()
{
	int a = 10;
	int* pa = &a;
	int* * ppa = &pa;//ppa就是二级指针
	**ppa = 20;
	printf("%d", **ppa);
	printf("%d", a);
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };//指针数组，实际上就是存放指针的数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(&arr[i]));
	}
	return 0;
}

指针练习

#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5, };
	short* p =(short*)arr;//int类型指针访问四个字节，把int强制转换成short类型，short只能访问两个字节
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;//p+0把元素1的前两个字节变成0了，p+1把第一个元素1后两个字节变成零，于是第一个元素就等于0了，同理
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);//0 0 3 4 5
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a); // a的地址形式为44 33 22 11 char* pc只能访问一个字节，于是44就变为00
	return 0;
}

#include <stdio.h>
int i;//全局变量-不初始化-默认为0
int main()
{
	i--;
	//-1
	//1000000000000000000001 原码
	//1111111111111111111111 补码
	if (i > sizeof(i))//sizeof()-计算变量/类型所占内存的大小 结果都会是无符号数
	{
		printf(">\n");//不管谁和sizeof计算都会把那个数便为无符号数，所以i不再是负数
	}
	else
	{
		printf("<\n");
	}
	return 0;
}

int main()
{
	char arr[] = "abcdef";
	char* p = arr;
	printf("%s", arr);打印出的是abcdef
	return 0;
}

int main()
{
	char* p = (char*)"ae";//这是一个常量字符串,把ae首字符的地址放到了指针
	printf("%c",p );//打印一个字符a
	printf("%s",p );//打印字符串
	return 0;
}

int main()
{
	constant char* p = "abcdef";
	*p = 'w';//常量字符串是不能被修改的
	printf("%s\n", p);
	return 0;
}

剑指offer笔试题
int main()
{
	char arr1[] = "abcd";
	char arr2[] = "abcd";
	const char* p1 = "abcd";
	const char* p2 = "abcd";
	if (arr1 == arr2)两个不同数组名，是两个不同数组的首元素地址，不相同
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");//
	}
	if(p1==p2)//p1p2指向了同一个常量字符串地址，常量字符串通常会储存到一个单独的内存区域
	{，当几个指针指向同一个常量是指向同一个内存
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}

int main()
{
	int arr[10] = { 0 };//整形数组
	char ch[5] = { 0 };//字符数组
	int* parr[4];//存放整形指针的数组
	char* pch[4];//存放字符指针的数组
}

指针数组的用法
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}

数组指针

int main()
{
	int* p = NULL;//p是整型指针 - 指向整型的指针 存放整形的地址
	char* pc = NULL;//pc是字符指针 指向字符的指针 存放字符的地址
	int arr[10] = { 0 };
	//arr - 首元素地址
	//&arr[0] 首元素地址
	//&arr - 整个数组的地址
	return 0;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10] = &arr;//p就是数组指针，数组地址要存起来，定义变量的时候*不是解引用操作

	char* arr[5];
	char *(*pa1)[5] = &arr;//pa指针变量名 *说明pa指针 [5]pa指向数组是五个元素 char*是元素类型
	//char*是变量，值可以改变， char[]是常量，值不能改变
	int arr2[10] = { 0 };
	int (*pa2)[10] = &arr2;
	return 0;
}

void print1(int arr[3][5], int x, int y)//参数是数组的形式
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int(*p)[5], int x, int y)//参数是指针，*p是变量，即第一行数组
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", (*(p + i))[j]);//p指针指向一个数组5个元素，+i就跳过一行数组，*（）解引用一行的元素
			//等价于p[i][j]  *(p[i]+j)
		}
	}
}
int main()
	{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
		return 0;
	}

int main()
{
	//字符指针
	char ch = 'w';
	char* p = &ch;
	const char* p2 = "abcdef";//p2指向字符串首字符地址，一个指针四个字节存不下

	//指针数组 - 数组 - 存放指针的数组
	int* arr[10];//arr数组存放10个int*的元素
	char* ch[5];

	//数组指正
	int* p3;//整形指针 
	char* p4;//字符指针

	int arr2[5];//数组
	int(*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
	return 0;
}

int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	//&函数名 - 函数名都是函数的地址
	/*printf("%p", ADD);
	printf("%p", &ADD);*/
	int (*pa)(int, int) = ADD;
	printf("%d\n",(*pa)(2, 3));//函数指针存放函数地址的指针 打印函数地址的内容
	return 0;
}

void print(const char* str)
{
	printf("%s\n", str);
}

int main()
{
	void(*p)(const char*) = print;
	(*p)("helloWorld");//p存的地址
	return 0;
}

函数指针 代码1

 (*(void (*)())0)()
    void(*)() - 函数指针类型
      void(*)()0 - 0是一个地址 把函数指针类型加括号是强制类型转换 转换后0是地址了
       ( *(void(*)())0  ) 0是这个地址外面加*解引用 最后加（）调用

代码2 

补充int ADD（int,int)
   第一个int是函数返回类型  括号里的是两个int型参数  ADD函数名

viod(*              signal(int,void(*)(int)))            (int);   
                     函数名  int型 函数指针型
signal是一个函数声明
signal有两个参数，一个int型，一个函数指针型，该指针指向int类型，返回类型是void
signal返回类型也是函数指针，指向函数的参数int，返回类型void

int ADD(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;

}
int div(int x, int y)
{
	return x / y;
}
int mul(int x, int y)
{
	return x * y;
}

int main()
{
	int* arr[5];//指针数组
	//需要一个数组存放四个函数地址 --函数指针数组
	int (*pa)(int, int) = ADD;

	int (*parr[4])(int, int) = {ADD,sub,div,mul};//函数指针数组

	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", parr[i](2, 3)); 
	}
	return 0;
}

练习

char* my_strcpy(char* dest, const char* src);
写一个函数指针pf，指向my_strcpy
char* (*pf)(char*, const char*);
写一个函数指针数组pfArr，能够存放四个函数地址
char* (*pfArr[4])(char*, const char*) = {};
首先是个数组 pfarr[4], 或者先写函数指针，再加上[]

                   计算器
void menu()
{
	printf("******************************\n");
	printf("****1.Add        2.Sub    ****\n");
	printf("****3.Mul        4.Div    ****\n");
	printf("******     0.exit         ****\n");
	printf("******************************\n");
}

int ADD(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

回调函数

void Calc(int(*pf)(int, int))//调用函数指针接收函数地址
{
	int x = 0;
	int y = 0;
	printf("请输入两个数字：\n");
		scanf("%d %d", &x, &y);
		printf("%d", pf(x, y));
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(ADD);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("请退出\n");
			break;
		default:
			printf("选择错误");
			break;
		}
	} while (input);
}

简化版 函数指针数组替代case语句
int main()
{
	int a = 0;
	int x = 0;
	int y = 0;
	int (*pfArr[5])(int, int) = { 0,ADD,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &a);
		if (a >= 1 && a <= 5)
		{
			printf("请输入两个数字：");
			scanf("%d %d", &x, &y);
			int ret = (*pfArr[a])(x, y);
			printf("%d\n", ret);
		}
		else if (a == 0)
		{
			printf("已退出\n");
		}
		else
		{
			printf("输入错误请重新选择：\n");
		}
	} while (a);//a=0 就会退出程序
	return 0;
}

	重复代码太多，内存冗余
	int main()
	{
		int a = 0;
		int x = 0;
		int y = 0;
		do
		{
			menu();
			printf("请选择：");
			scanf("%d", &a);
			printf("请输入两个数字：");
				scanf("%d %d", &x, &y);
				/*switch (a)
				{
				case 1:
					printf("%d",(Add(x, y)));
					break;
				case 2:
					printf("%d",(Sub(x, y)));
					break;
				case 3:
					printf("%d",(Mul(x, y)));
					break;
				case 4:
					printf("%d", (Div(x, y)));
					break;
				case 0:
					printf("已退出\n");
				default:
					printf("输入错误\n");
				}
		}while(a);
		return 0;
	}*/

指向函数指针数组的指针
int ADD(int x, int y)
{
	return x + y;
}

int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//取出数组的地址
	int (*pf)(int, int);//函数指针

	int(*pfArr)[4](int, int);//pfarr是一个数组 - 函数指针数组
    int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr是一个数组指针，指针指向函数指针数组有四个元素
	//每个元素类型是一个函数指针 int(*)(int , int)
	return 0;
}

void print(const char* str)
{
	printf("hehe:%s", str);
}

void test(void (*p)(const char*))//接收函数名，相当于接收地址，写一个指向这个函数的指针
{
	printf("test\n");
	p("bit");//还指向一个函数，在test函数内部p指向的函数调用函数
}

int main()
{
	test(print);
	return 0;
}

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//排序的趟数
	for (i = 0; i < sz; i++);
	{
		int j = 0;
		//每排排序的次数
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

qsort函数讲解

#include <stdlib.h>
#include <string.h>
int cmp_int(const void* e1,const void* e2)
{
	return *(const int*)e1 - *(const int*)e2;//解引用比较大小
}
void test1()
{
	int i = 0;
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);//com_int比较方式
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_float(const void* e1, const void* e2)
{
	return ((int)*(const float*)e1 - *(const float*)e2);//因为得到的结果必须是int型
}
void test2()
{
	int i = 0;
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n");
}

struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_age(const void* e1, const void* e2)
{
	return ((const struct Stu*)e1)->age - ((const struct Stu*)e2)->age;//先强制类型转换成结构体指针比较
}//结构体比较不能直接比较
void test3()
{
	struct Stu s[3] = { {"Wang",30},{"Li",20},{"Zhang",40} };
	int i = 0;
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_age);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", s[i].age);
	}
	printf("\n");
}

//结构体中名字的比较是字符比较 不能直接大于等于小于比较
//strcmp
int cmp_stu_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test4()
{
	struct Stu s[3] = { {"Wang",30},{"Li",20},{"Zhang",40} };
	int i = 0;
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_name);
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name);
	}
	printf("\n");
}

void Swap(char* buf1, char* buf2, int width)
//一对字符一对字符的交换
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1,const void* e2))//让冒泡排序实现各种类型的排序
//width是一个参数的大小，单位是字节，用来for循环比较
//不清楚排序的类型用void* e1 e2接收要比较两个数的地址
//加深qsort理解
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1;i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
				//不清楚比较参数的类型可以先将元素强制转换成char*（一个字节一个字节算）加width
			{
				//比较完交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				//交换需要知道一个元素多大才能一个字符一个字符传，所以传参加上width
			}
		}

	}
	printf("\n");
}
void test6()
{
	int i = 0;
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d " ,arr[i]);
	}
	printf("\n");
}
void test5()
{
	int i = 0;
	struct Stu s[3] = { {"Wang",30},{"Li",20},{"Zhang",40} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_age);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", s[i].age);
	}
	printf("\n");
}
int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	return 0;
}