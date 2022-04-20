#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

                                                     //动态内存分配

//c语言可以创建变长数组 -c99 arr[n]但vs不可以
//int main()
//{
//	//向内存申请10个整型空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误的一个原因
//		printf("%s", strerror(errno));//内存空间分配不足
//	}
//	else//正常使用空间
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ",p[i]);
//		}
//	}
//	//当动态内存空间不再使用，返还系统
//	free(p);//malloc和free成对使用
//
//	return 0;
//}

                                                   //calloc
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//初始化元素为0
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc  
//调整动态内存空间

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			p[i]=i;
//		}
//		for (int i = 0; i < 5; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
	//申请20个空间不够用，想申请40个

	//                                             realloc注意事项
	// 
	//1.如果p指向的空间有足够内存可以追加，则直接追加，返回p
	//2.如果不够，则realloc函数返回一个新的内存空间区域
	//开辟新的一块内存空间，并把原来数据拷贝回来，释放旧的内存空间
	//最后返回新的内存空间地址
	//3.要用一个新指针来接收realloc返回值
//	int* ptr = (int*)realloc(p, INT_MAX);
//	{
//		if (ptr != NULL)//说明开辟空间追加失败了
//		{
//			p = ptr;//防止万一开辟空间失败，把p指针改变
//		}
//		for (int j = 5; j < 10; j++)
//		{
//			p[j] = j;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
/*int*p=realloc(NULL,40)*///相当于malloc

 //                                                 使用动态内存常见错误

//1.对NULL进行解引用操作  判断内存是否开辟成功 if(p==NULL)

//2.对动态开辟的内存越界访问
//int* p = (int*)malloc(5 * sizeof(int));
//if (p == NULL)
//{
//	return 0;
//}
//else
//{
//	for (int i = 0; i < 10; i++)//越界访问 只开辟了5个空间
//		p[i] = i;
//}

//3.free不能用于非动态区开辟内存
//int a = 20;
//int* p = &a;
//free(p);
//p = NULL;

//4.使用free释放动态开辟内存一部分
//int* p = (int*)malloc(40);
//if (p == NULL)
//{
//	return 0;
//}
//for (int i = 0; i < 10; i++)
//{
//	*p++ = i;
//}
//回收空间 这个时候p指针地址已经发生改变了，代码报错。只能释放指针起始时的位置
//*（p+i)起始地址加下标的方式可以，但不能改变p++移动指针
//free(p);
//p == NULL;

//5.对同一块动态内存多次释放
//free(p);
//free(p);

// 经典笔试题

void getmemory(char* p)//p也有一个地址并且把str内容NULL拷贝进来
{
	p = (char*)malloc(100);//开辟后放了一个地址进来
}

void test(void)
{
	char* str = NULL;
	getmemory(str);//调用结束后p的地址没用传过来，这个str传参是传值，不是传地址，不会改变str中NULL的值
	/*如果改成正确的则是（&str)传递地址    接收变成char* *p对地址解引用   最后主函数free(str)
	指针传地址要用二级指针接收*/
	strcpy(str, "hello world");//程序崩溃 str=NULL不是一个有效的地址
	printf(str);
}

int main()
{
	test();
	return 0;
}

//经典例题   返回栈空间地址
//char* getmemory(void)
//{
//	char p[] = "hello world";//局部数组  栈区地址  返回的地址出函数调用完返还给系统了
//	return p;
//}
//
//void test(void)
//{
//	char* str = NULL;
//	str = getmemory();
//	printf(str);//地址虽然还是那个地址，打印随机值
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//补充
//1.
//int* test()
//{
//	static int a = 10;//静态区  这个时候a的地址是不销毁的调用结束后
//	//int a = 10;栈区
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//2.
//int* test()
//{
//	int* ptr = (int*)malloc(100);//堆区 也没问题，返回的地址和内存空间依旧在，只有free才能返还空间
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

//关于栈空间 有问题的代码
//int* f2(void)
//{
//	int* ptr;//没有定义初始值 野指针直接进行解引用 非法访问内存
//	*ptr = 10;
//	return 0;
//}

//经典例题
//void getmemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void test(void)
//{
//	char* str = NULL;
//	getmemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//打印出hello 但内存泄漏 没有free
//}
//int main()
//{
//	test();
//	return 0;
//}

//经典例题 非法访问内存
void test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free不会把指针置为NULL
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);//会打印world  但属于非法访问，内存都还给系统了还要用
	}
}