#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//给一个秒数，转换为小时 分钟 秒数三个数字输出
//3661s     1h 1m 1s

//int main()
//{
//	//输入
//	int S = 0;
//	scanf("%d", &S);
//	//计算
//	int hour = S / 60/60;
//	int min = S / 60%60;//  除60是换算成分钟，%60是把能组成一小时60min之后剩下不能组成小时的min
//	int s = S % 60 ;//每60s就能组成1min,所以%60把不能合成min的秒数留下
//	//输出
//	printf("%d %d %d", hour, min, s);
//	return 0;
//}


//输入三科成绩  输出总成绩和平均成绩保留两位小数

//int main()
//{
//	double score[3] = { 0 };
//	scanf("%lf %lf %lf", &score[0], &score[1], &score[2]);
//	double sum = score[0] + score[1] + score[2];
//	double avg = sum/3.0;
//	printf("%.2lf %.2lf", sum, avg);
//	return 0;
//}


//连续输入5个数字并求出平均值保留1位小数
//int main()
//{
//	int num[5] = {0};
//	int i = 0;
//	double sum = 0.0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &num[i]);
//		sum += num[i];
//	}
//	printf("%.1lf", sum / 5.0);
//}


//输入一个16进制数字和一个八进制数字，和为十进制数字
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%x %o", &a, &b);
//	//%x 是16进制数字数据格式
//	//%o 是8进制数据格式
//	printf("%d", a + b);
//}



//输入6个成绩 输出最大前五

//int Cmp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;//<0返回一个较小的数字所以是升序
//}
//
//int main()
//{
//	int arr[6] = { 0 };
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		scanf(" %d", &arr[i]);
//	}
//	qsort(arr, 6, sizeof(int),Cmp);
//	for (int n = 0; n < 5; n++)
//	{
//		printf("%d", arr[n]);
//	}
//	return 0;
//}

//输入五个人身高求平均值 保留两位小数

//int main()
//{
//	double height = 0.0;
//	double sum = 0.0;
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%lf", &height);
//		sum += height;
//	}
//	printf("%.2lf", sum/5.0);
//	return 0;
//}

//  输出数字三角形

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n))
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//输入7个成绩 去掉最高分最低分，求平均成绩
//int main()
//{
//	int score = 0;
//	int max = 0;
//	int min = 100;//假设最低分100
//	int sum = 0;//假设最高分0
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum+= score;
//		if (score>max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2lf", ((float)(sum - min - max)) / 5.0);
//	return 0;
//}


//在一个有序数列中插入一个数字，保证序列还是升序
//int cmp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int num = 0;
//	int insert = 0;
//	int n = 0;
//	scanf("%d", &num);
//	int arr[51] = { 0 };
//	{
//		for (int i = 0; i < num; i++)
//			scanf("%d", &arr[i]);
//	}
//	scanf("%d", &n);
//	for (int j = num - 1; j >= 0; j--)
//	{
//		if (arr[j] > n)//数组里的数字依次和m比较
//		{
//			arr[j+1]=arr[j];
//		}
//		else
//		{
//			arr[j + 1] = n;
//			break;
//		}
//		if (j < 0)
//		{
//			arr[0] = n;
//		}
//	}
//	
//	return 0;
//}


//判断素数的两种方法 

//素数判断筛选法
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int arr[101] = { 0 };
//		for (i = 2; i <= n; i++)
//		{
//			arr[i] = i;//储存数据
//		}
//		for (int k = 2; k <= n; k++)//储存除数
//		{
//			for (int j = k+1; j <= n; j++)
//			{
//				if (arr[j] % k == 0)
//				{
//					arr[j] = 0;//2之后能被2整除的数字清0
//				}
//			}
//		}
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			
//			if (arr[i] != 0)
//			{
//				printf("%d ", arr[i]);
//			}
//			else
//			{
//				count++;
//			}
//		}
//		printf("\n%d", count);
//	}
//	
//	return 0;
//}

//试除法
//int main()
//{
//	int n = 0;
//	int count = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 3; i <= n; i++)
//		{
//			int j = 0;
//			for ( j = 2; j < n; j++)//判断是是i否是素数
//			{
//				if (i % j == 0)
//				{
//					count++;//能被2到i-1之间某个数整除一定不是素数
//					break;
//				}
//			}
//			if (i == j)//上面的for循环一直找不到2到i-1能除尽j的数，j=n时逃出for循环,说明一定是素数
//			{
//				printf("%d ", i);
//			}
//		}printf("\n%d", count);
//	}
//	return 0;
//}

//黑白像素
//例如输入两个不同arr[3][3]，对比相同位置不同数字占总数的比例

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	int count = 0;
//	scanf("%d %d" ,&n, &m);
//	for (int j = 0; j < n; j++)
//	{
//		for (int k = 0; k < m; k++)
//		{
//			scanf("%d", &arr1[j][k]);//输入数据在arr1
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		for (int k = 0; k < m; k++)
//		{
//			scanf("%d", &arr2[j][k]);//输入数据在arr2
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		for (int k = 0; k < m; k++)
//		{
//			if (arr1[j][k] == arr2[j][k])
//			{
//				count++;
//			}
//		}
//	}
//	printf("%.2lf", 100.0 * count / (n * m));
//	return 0;
//}

//模拟用户名和密码登录
//#include <string.h>
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[100] = { 0 };
//	while (~scanf("%s %s",&arr1,&arr2))
//	{
//		if (strcmp(arr2, "admin") == 0 && strcmp(arr2, "admin") == 0)
//		{
//			printf("Login Success!\n");
//		}
//		else
//		{
//			printf("Login Fail!\n");
//		}
//	}
//	return 0;
//}

//判断1到2019里含9的个数

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		int m = i;//易错点，否则每次回来i都会等于0
//		while (m)
//		{
//			if (m % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			else
//			{
//				m /= 10;
//			}
//		}
//	}printf("%d", count);
//	return 0;
//}

//输入数字N，统计奇数偶数数个数

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 1)
//	{
//		printf("%d %d", n / 2 + 1, n / 2);
//	}
//	else
//	{
//		printf("%d %d", n / 2, n / 2);
//	}
//}