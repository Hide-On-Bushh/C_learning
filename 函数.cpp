#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;//ab加减
//}

//#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "##########";//bit\0###,\0表示字符串结束，所以拷贝到arr2里的内容，后面#消失了。
//	strcpy(arr2, arr1);
//	//strcpy-string copy-拷贝字符串长度
//	//strlen-string length-计算字符串长度
//	printf("%s\n", arr2);
//	return 0;//strcpy用法
//}

//memset-memory set内存设置
//#include string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0
//}

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("max=%d\n", max);
//	max=get_max(200, 300);
//	printf("max=%d\n", max);
//	return 0;//自定义函数求最大值
//}

//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}//无法实现交换,xy有自己的独立空间，ab和xy压根不是同一个空间。实参传递给形参，形参是实参的一份临时拷贝，对形参的改变是不会改变实参的。
//void Swap2(int* pa, int* pb)//void不需要返回值,ab传输过来的为地址，所以设置地址接收
//{
//	int tmp = 0;//*pa就是a
//	tmp = *pa;//*pb就是b
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	/*Swap1(a, b);*///无法交换
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n",a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//pa指针变量
//	*p = 20;//解引用操作
//	printf("%d\n", a);
//	return 0;
//}

//int is_prime(int n)//创建函数判断100-200之间的素数
//{
//	int k = 0;
//	for (k = 2; k < n; k++)
//	{
//		if (n % k == 0)
//			return 0;
//	}
//			return 1;
//}
//int main()
//{
//	int i = 0;
//		for (i = 100; i <= 200; i++)//打印100-200素数
//		{
//			if (is_prime(i) == 1)//判断i是否是素数
//			{
//				printf("%d ", i);
//			}
//		}
//	return 0;
//}

//int is_leap_year(int y)
//	{
//	if (y % 4 == 0 && y % 100 != 0 )//判断是否为闰年
//		return 1;
//	else
//		return 0;
//	}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if(1==is_leap_year(year));
//		{
//			printf("%d ", year);
//		}	
//	}
//	return 0;
//}

//int binary_search(int arr[],int k,int sz)//实际上这里的arr是一个指针，指针才可以接收地址
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);传参传过来的只是一个地址，在这里求指针大小，始终只能求得1，因为两个指针大小相同都是4个字节或者八个字节
//	int right = sz - 1;
//		int left = 0;
//		while (left <= right)//只有左下标小于等于右下标才可以进入循环
//		{
//			int mid = (left + right) / 2;//中间元素下标,只能放到循环里求，循环外只能计算一次下标
//			if (arr[mid] < k)//是数字和比较，不是下标和数字k比较
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				return mid;
//			}
//		}
//			return -1;
//}
//int main()//二分查找
////在一个有序数组中查找某个数字
////找到这个数返回这个数的下标，找不到返回-1
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 17;//找到数字7下标
//	int sz = sizeof(arr) / sizeof(arr[0]);//在这里就是求元素个数
//	int ret=binary_search(arr,k,sz);//arr传递过去的内容为数组arr首元素地址，数组传参仅仅是传递地址
//	if (ret==-1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，这个数字下标为：%d", ret);
//	}
//	return 0;
//}

//写一个函数，每次调用一次这个函数，就会将num值加1
//void Add(int *p)//不用返回值
//{
//	(*p)++;//++优先级作用于p所以要打（）
//}
//int main()
//{
//	int num = 0;
//	Add(&num);//因为num的值始终在变化,采用传址的方式
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//函数嵌套调用
//void one_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//for (i = 1; i <= 3; i++)
//{
//	one_line();
//}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//链式访问
//#include <string.h>
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	//1
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值是打印的字符的个数，最里面打印的是43，第二层43的字符串个数是2，最后一层2变为只有一个字符依次打的是43 2 1
//	return 0;
//}

//#include "Add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////创建一个add.h放函数声明，在创建一个add.c放函数定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
////函数声明
//int Add(int x, int y);

//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}//最简单的递归

//屏幕上输入1234，在打印出 1 2 3 4
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//直接调用，可重复使用
//     }
//	printf("%d", n % 10);//函数调用每次除10，除到1时没有调用print函数先打印得到一个1，因为没有做完调用，所以再返回12,123,1234的函数print调用，依次打出234。
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//不使用临时变量,求字符串长度
//#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//*str解引用
//	{
//		count++;
//		str++;//指向数组中的地址也要每次+1，才能向后走。
//	}
//	return count;
//}//临时变量的做法

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}//递归
//int main()
//{
//	char arr[] = "bit";//存放这b i t \0不计算\0长度
//	/*int len=strlen(arr);
//	printf("len=%d", len);*///创建临时变量的做法
//	int len = my_strlen(arr);//arr为数组，数组传参传过去的不是整个数组，而是第一个元素的地址
//	printf("len=%d", len);
//	return 0;
//}
//
////求n的阶乘递归和非递归算法
//int fac2(int x)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= x; i++);
//	ret *= i;
//		return ret;
//}//临时变量做法
//int fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else return x * fac(x - 1);
//}//递归算法
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//    int z=sum(n);
//	printf("z
//	return 0;
//}

//斐波那些数列，第三个数是前两个数只和
// 1 1 2 3 5 8 13 21 34 55...
//
//
//int Fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return Fib(x - 2) + Fib(x - 1);
//}//递归效率不高
//50 求50知道两个数
//49 48 求两个数要知道四个数
//48 47 47 46
//47 46 46 45 46 45 45 44
//...
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	;
//}//从前往后算比递归快
//int main()
//{
//	int n=0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret=Fib(n);
//	printf("ret=%d ", ret);
//	return 0;
//}

//汉诺塔问题，青蛙跳台问题#define _CRT_SECURE_NO_WARNINGS 1=%d", z);
