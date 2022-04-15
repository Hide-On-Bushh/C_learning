#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//统计数字二进制中1的个数
//int One( unsigned int x)//一定要加unsigned因为万一是负数 x/=2 返回值一直是0，要把负数当做无符号数计算
//{
//	int count = 0;
//	while (x)
//	{
//		if (1 == x%2)
//		{
//			count++;
//		}
//		x /= 2;
//	}return count;
//}//第一种方法

//int One(int x)
//{
//	int count = 0;
//	int i = 0;
//	for(i=0;i<32;i++)
//	{
//		if (1 == ((x >> i) & 1))
//			count++;
//	}return count;
//}//第二种方法 效率不高至少要循环32次

//int One(int x)
//{
//	int count = 0;
//	while(x)
//	{
//		x = x & (x - 1);
//		count++;
//	}
//	return count;
//}//第三种方法 谷歌考试题
//x&(x-1)
//x=13
//00000000 00000000 00001101
//1101 x
//1100 x-1
//1100 x=x&x-1

//1100 x
//1011 x-1
//1000 x=x&x-1

//1000 x
//0111 x-1
//0000 x&x-1

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int number=One(i);
//	printf("%d", number);
//	return 0;
//}

//求二进制中不同位个数

//int One_Zero(int x, int y)
//{
//	int count = 0;
//	int i = x ^ y;
//	while (i)
//	{
//		i = i & (i - 1);//也可以直接调用上面的函数 One（i)
//			count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int count=One_Zero(a,b);
//	printf("%d", count);
//	return 0;
//}

//打印数字奇数位和偶数位
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m =0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//使用指针打印数组内容

//void Print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", (*(p + i)));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}

//字符串逆序 递归实现

int my_strlen(char* str)//不能使用库函数strlen计算字符串长度
{
	int count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char *arr)
{
	int left = 0;
	int right = my_strlen(arr)-1;
	while (right >left)
	{
		int tmp=arr[right];
		arr[right] = arr[left];
		arr[left] = tmp;
		left++;
		right--;
	}
//}第一种方法循环实现，不使用递归

//int my_strlen(char* str)//不能使用库函数strlen计算字符串长度
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';//因为调用my_strlen函数会计算长度到\0的位置，如果直接放arr[0]的内容，字符串长度会一直不变！！！！！！！！！1
//	if(my_strlen(arr+1)>=2)//剩余1个就不用交换了
//	reverse_string(arr + 1);//交换第一个和最后一个字符后，每次指针往后走一位，计算第二个字符到/0前的字符串长度，所以每次交换后先放最后一个字符内容为\0
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//计算一个数每一位之和

//int DigitSum(unsigned int x)
//{
//	/*if (x > 9)
//	{
//		return DgitSum(x/10)+(x%10)
//	}
//	else
//	{
//		return x;
//	}*///运用递归的方法
//	int sum = 0;
//	while (x)
//	{
//		sum = sum + (x % 10);
//		x = x / 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("sum=%d", sum);
//	return 0;
//}

//递归实现n的k次方

//double Pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1 / (Pow(n, -k)));
//	}
//	else if (k != 0)
//	{
//		return Pow(n, k - 1) * n;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//		printf("%lf", ret);
//	return 0;
//}


//打印杨辉三角形
//1
//1 1
//1 2 1
//1 3 3 1
//.......

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (j == i)
//			{
//				arr[i][j] =1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//5个运动员参加10米跳台比赛预测名次
// a：b第二，我第三
// b：我第二，e第四
// c：我第一，d第二
// d:c最后，我第三
// e:我第四，a第一
// 比赛结束每位选手都说对了一半

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 0; a <= 5; a++)
//	{
//		for (b = 0; b <= 5; b++)
//		{
//			for (c = 0; c <= 5; c++)
//			{
//				for (d = 0; d <= 5; d++)
//				{
//					for (e = 0; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((e == 4) + (a == 1) == 1) &&//每个人说的话只有一半对了，所以每个条件等于1
//							((c == 5) + (d == 3) == 1))
//						{
//							if (a * b * c * d * e == 120)//控制正确排名 1 2 3 4 5
//								printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//喝汽水一元一瓶，空瓶盖两个又可以换一瓶，现在有20元，可以喝几瓶？
//
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	scanf("%d", &money);
//	//买回来的
//	total = money;
//	empty = money;
//	//换回来的
//	while (empty >= 2)
//	{
//		total +=  empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}
//
//一个数组里实现奇数和偶数位置调换，奇数放到偶数前面
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//  
//void move(int arr[], int sz)
//{
//	int right = sz - 1;
//	int left = 0;
//	while (left < right)
//	{
//		//从左边找偶数就停止
//		while ((left < right) && (arr[left] % 2 == 1))
//			//left<right可能数组里出现全是偶数或者全是奇数
//		{
//			left++;
//		}
//		//右边找奇数，找到奇数停止
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (arr[left] <= arr[right])
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//	return 0;
//}