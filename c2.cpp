#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//��һ��������ת��ΪСʱ ���� ���������������
//3661s     1h 1m 1s

//int main()
//{
//	//����
//	int S = 0;
//	scanf("%d", &S);
//	//����
//	int hour = S / 60/60;
//	int min = S / 60%60;//  ��60�ǻ���ɷ��ӣ�%60�ǰ������һСʱ60min֮��ʣ�²������Сʱ��min
//	int s = S % 60 ;//ÿ60s�������1min,����%60�Ѳ��ܺϳ�min����������
//	//���
//	printf("%d %d %d", hour, min, s);
//	return 0;
//}


//�������Ƴɼ�  ����ܳɼ���ƽ���ɼ�������λС��

//int main()
//{
//	double score[3] = { 0 };
//	scanf("%lf %lf %lf", &score[0], &score[1], &score[2]);
//	double sum = score[0] + score[1] + score[2];
//	double avg = sum/3.0;
//	printf("%.2lf %.2lf", sum, avg);
//	return 0;
//}


//��������5�����ֲ����ƽ��ֵ����1λС��
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


//����һ��16�������ֺ�һ���˽������֣���Ϊʮ��������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%x %o", &a, &b);
//	//%x ��16�����������ݸ�ʽ
//	//%o ��8�������ݸ�ʽ
//	printf("%d", a + b);
//}



//����6���ɼ� ������ǰ��

//int Cmp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;//<0����һ����С����������������
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

//��������������ƽ��ֵ ������λС��

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

//  �������������

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


//����7���ɼ� ȥ����߷���ͷ֣���ƽ���ɼ�
//int main()
//{
//	int score = 0;
//	int max = 0;
//	int min = 100;//������ͷ�100
//	int sum = 0;//������߷�0
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


//��һ�����������в���һ�����֣���֤���л�������
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
//		if (arr[j] > n)//��������������κ�m�Ƚ�
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


//�ж����������ַ��� 

//�����ж�ɸѡ��
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int arr[101] = { 0 };
//		for (i = 2; i <= n; i++)
//		{
//			arr[i] = i;//��������
//		}
//		for (int k = 2; k <= n; k++)//�������
//		{
//			for (int j = k+1; j <= n; j++)
//			{
//				if (arr[j] % k == 0)
//				{
//					arr[j] = 0;//2֮���ܱ�2������������0
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

//�Գ���
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
//			for ( j = 2; j < n; j++)//�ж�����i��������
//			{
//				if (i % j == 0)
//				{
//					count++;//�ܱ�2��i-1֮��ĳ��������һ����������
//					break;
//				}
//			}
//			if (i == j)//�����forѭ��һֱ�Ҳ���2��i-1�ܳ���j������j=nʱ�ӳ�forѭ��,˵��һ��������
//			{
//				printf("%d ", i);
//			}
//		}printf("\n%d", count);
//	}
//	return 0;
//}

//�ڰ�����
//��������������ͬarr[3][3]���Ա���ͬλ�ò�ͬ����ռ�����ı���

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
//			scanf("%d", &arr1[j][k]);//����������arr1
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		for (int k = 0; k < m; k++)
//		{
//			scanf("%d", &arr2[j][k]);//����������arr2
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

//ģ���û����������¼
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

//�ж�1��2019�ﺬ9�ĸ���

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		int m = i;//�״�㣬����ÿ�λ���i�������0
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

//��������N��ͳ������ż��������

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