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
//	return 0;//ab�Ӽ�
//}

//#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "##########";//bit\0###,\0��ʾ�ַ������������Կ�����arr2������ݣ�����#��ʧ�ˡ�
//	strcpy(arr2, arr1);
//	//strcpy-string copy-�����ַ�������
//	//strlen-string length-�����ַ�������
//	printf("%s\n", arr2);
//	return 0;//strcpy�÷�
//}

//memset-memory set�ڴ�����
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
//	return 0;//�Զ��庯�������ֵ
//}

//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}//�޷�ʵ�ֽ���,xy���Լ��Ķ����ռ䣬ab��xyѹ������ͬһ���ռ䡣ʵ�δ��ݸ��βΣ��β���ʵ�ε�һ����ʱ���������βεĸı��ǲ���ı�ʵ�εġ�
//void Swap2(int* pa, int* pb)//void����Ҫ����ֵ,ab���������Ϊ��ַ���������õ�ַ����
//{
//	int tmp = 0;//*pa����a
//	tmp = *pa;//*pb����b
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	/*Swap1(a, b);*///�޷�����
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n",a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//paָ�����
//	*p = 20;//�����ò���
//	printf("%d\n", a);
//	return 0;
//}

//int is_prime(int n)//���������ж�100-200֮�������
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
//		for (i = 100; i <= 200; i++)//��ӡ100-200����
//		{
//			if (is_prime(i) == 1)//�ж�i�Ƿ�������
//			{
//				printf("%d ", i);
//			}
//		}
//	return 0;
//}

//int is_leap_year(int y)
//	{
//	if (y % 4 == 0 && y % 100 != 0 )//�ж��Ƿ�Ϊ����
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

//int binary_search(int arr[],int k,int sz)//ʵ���������arr��һ��ָ�룬ָ��ſ��Խ��յ�ַ
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);���δ�������ֻ��һ����ַ����������ָ���С��ʼ��ֻ�����1����Ϊ����ָ���С��ͬ����4���ֽڻ��߰˸��ֽ�
//	int right = sz - 1;
//		int left = 0;
//		while (left <= right)//ֻ�����±�С�ڵ������±�ſ��Խ���ѭ��
//		{
//			int mid = (left + right) / 2;//�м�Ԫ���±�,ֻ�ܷŵ�ѭ������ѭ����ֻ�ܼ���һ���±�
//			if (arr[mid] < k)//�����ֺͱȽϣ������±������k�Ƚ�
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
//int main()//���ֲ���
////��һ�����������в���ĳ������
////�ҵ������������������±꣬�Ҳ�������-1
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 17;//�ҵ�����7�±�
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����������Ԫ�ظ���
//	int ret=binary_search(arr,k,sz);//arr���ݹ�ȥ������Ϊ����arr��Ԫ�ص�ַ�����鴫�ν����Ǵ��ݵ�ַ
//	if (ret==-1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ���������±�Ϊ��%d", ret);
//	}
//	return 0;
//}

//дһ��������ÿ�ε���һ������������ͻὫnumֵ��1
//void Add(int *p)//���÷���ֵ
//{
//	(*p)++;//++���ȼ�������p����Ҫ�򣨣�
//}
//int main()
//{
//	int num = 0;
//	Add(&num);//��Ϊnum��ֵʼ���ڱ仯,���ô�ַ�ķ�ʽ
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//����Ƕ�׵���
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

//��ʽ����
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
//	printf("%d", printf("%d", printf("%d", 43)));//printf�ķ���ֵ�Ǵ�ӡ���ַ��ĸ������������ӡ����43���ڶ���43���ַ���������2�����һ��2��Ϊֻ��һ���ַ����δ����43 2 1
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
////����һ��add.h�ź����������ڴ���һ��add.c�ź�������
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
////��������
//int Add(int x, int y);

//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}//��򵥵ĵݹ�

//��Ļ������1234���ڴ�ӡ�� 1 2 3 4
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//ֱ�ӵ��ã����ظ�ʹ��
//     }
//	printf("%d", n % 10);//��������ÿ�γ�10������1ʱû�е���print�����ȴ�ӡ�õ�һ��1����Ϊû��������ã������ٷ���12,123,1234�ĺ���print���ã����δ��234��
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//��ʹ����ʱ����,���ַ�������
//#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//*str������
//	{
//		count++;
//		str++;//ָ�������еĵ�ַҲҪÿ��+1����������ߡ�
//	}
//	return count;
//}//��ʱ����������

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}//�ݹ�
//int main()
//{
//	char arr[] = "bit";//�����b i t \0������\0����
//	/*int len=strlen(arr);
//	printf("len=%d", len);*///������ʱ����������
//	int len = my_strlen(arr);//arrΪ���飬���鴫�δ���ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len=%d", len);
//	return 0;
//}
//
////��n�Ľ׳˵ݹ�ͷǵݹ��㷨
//int fac2(int x)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= x; i++);
//	ret *= i;
//		return ret;
//}//��ʱ��������
//int fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else return x * fac(x - 1);
//}//�ݹ��㷨
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//    int z=sum(n);
//	printf("z
//	return 0;
//}

//쳲���Щ���У�����������ǰ������ֻ��
// 1 1 2 3 5 8 13 21 34 55...
//
//
//int Fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return Fib(x - 2) + Fib(x - 1);
//}//�ݹ�Ч�ʲ���
//50 ��50֪��������
//49 48 ��������Ҫ֪���ĸ���
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
//}//��ǰ������ȵݹ��
//int main()
//{
//	int n=0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret=Fib(n);
//	printf("ret=%d ", ret);
//	return 0;
//}

//��ŵ�����⣬������̨����#define _CRT_SECURE_NO_WARNINGS 1=%d", z);
