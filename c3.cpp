#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//��������ɼ� �����ֵ����Сֵ ����ƽ��ֵ
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double max = 0.0;
//	double min = 100.0;
//	double sum = 0.0;
//	double score = 0.0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lf", &score);
//		sum += score;
//		if (score < min)
//			min = score;
//		if (score > max)
//			max = score;
//	}
//	printf("%lf %lf %.2lf", min, max, sum / 5.0);
//	return 0;
//}


//������������ �ж�����������һ��
//#include <string.h>
//int main()
//{
//	char password[10] = { 0 };
//	char repeat[10] = { 0 };
//	scanf("%s %s", &password, &repeat);
//	if(strcmp(password,repeat) == 0)
//	{
//		printf("smae\n");
//	}
//	else
//	{
//		printf("different");
//	}
//	return 0;
//}

//���� NxM �������д���0Ԫ��֮��
//int main()
//{
//	int N, M;
//	scanf("%d %d", &N, &M);
//	int arr[5][5] = {0};
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > 0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//����һ�������ж��Ƿ�����
//#include <string.h>
//int cmp(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	qsort(arr, n, 4, cmp);
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j]);
//		}
//	}
//	return 0;
//}

//ȥ���ظ�����

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[40] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//ȥ��
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j=i+1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				int k = 0;//ȥ�أ�����Ԫ���õ�ǰ�渲��
					for(k=j;k<n-1;k++)
				{
						arr[k] = arr[k + 1];
				}
					n--;
			}
		}//������������ͬ����
	}
}