#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ͳ�����ֶ�������1�ĸ���
//int One( unsigned int x)//һ��Ҫ��unsigned��Ϊ��һ�Ǹ��� x/=2 ����ֵһֱ��0��Ҫ�Ѹ��������޷���������
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
//}//��һ�ַ���

//int One(int x)
//{
//	int count = 0;
//	int i = 0;
//	for(i=0;i<32;i++)
//	{
//		if (1 == ((x >> i) & 1))
//			count++;
//	}return count;
//}//�ڶ��ַ��� Ч�ʲ�������Ҫѭ��32��

//int One(int x)
//{
//	int count = 0;
//	while(x)
//	{
//		x = x & (x - 1);
//		count++;
//	}
//	return count;
//}//�����ַ��� �ȸ迼����
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

//��������в�ͬλ����

//int One_Zero(int x, int y)
//{
//	int count = 0;
//	int i = x ^ y;
//	while (i)
//	{
//		i = i & (i - 1);//Ҳ����ֱ�ӵ�������ĺ��� One��i)
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

//��ӡ��������λ��ż��λ
//void print(int m)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//
//	printf("\n");
//	printf("ż��λ��\n");
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

//ʹ��ָ���ӡ��������

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

//�ַ������� �ݹ�ʵ��

int my_strlen(char* str)//����ʹ�ÿ⺯��strlen�����ַ�������
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
//}��һ�ַ���ѭ��ʵ�֣���ʹ�õݹ�

//int my_strlen(char* str)//����ʹ�ÿ⺯��strlen�����ַ�������
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
//	arr[len - 1] = '\0';//��Ϊ����my_strlen��������㳤�ȵ�\0��λ�ã����ֱ�ӷ�arr[0]�����ݣ��ַ������Ȼ�һֱ���䣡����������������1
//	if(my_strlen(arr+1)>=2)//ʣ��1���Ͳ��ý�����
//	reverse_string(arr + 1);//������һ�������һ���ַ���ÿ��ָ��������һλ������ڶ����ַ���/0ǰ���ַ������ȣ�����ÿ�ν������ȷ����һ���ַ�����Ϊ\0
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

//����һ����ÿһλ֮��

//int DigitSum(unsigned int x)
//{
//	/*if (x > 9)
//	{
//		return DgitSum(x/10)+(x%10)
//	}
//	else
//	{
//		return x;
//	}*///���õݹ�ķ���
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

//�ݹ�ʵ��n��k�η�

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


//��ӡ���������
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


//5���˶�Ա�μ�10����̨����Ԥ������
// a��b�ڶ����ҵ���
// b���ҵڶ���e����
// c���ҵ�һ��d�ڶ�
// d:c����ҵ���
// e:�ҵ��ģ�a��һ
// ��������ÿλѡ�ֶ�˵����һ��

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
//							((e == 4) + (a == 1) == 1) &&//ÿ����˵�Ļ�ֻ��һ����ˣ�����ÿ����������1
//							((c == 5) + (d == 3) == 1))
//						{
//							if (a * b * c * d * e == 120)//������ȷ���� 1 2 3 4 5
//								printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//����ˮһԪһƿ����ƿ�������ֿ��Ի�һƿ��������20Ԫ�����Ժȼ�ƿ��
//
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	scanf("%d", &money);
//	//�������
//	total = money;
//	empty = money;
//	//��������
//	while (empty >= 2)
//	{
//		total +=  empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}
//
//һ��������ʵ��������ż��λ�õ����������ŵ�ż��ǰ��
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
//		//�������ż����ֹͣ
//		while ((left < right) && (arr[left] % 2 == 1))
//			//left<right�������������ȫ��ż������ȫ������
//		{
//			left++;
//		}
//		//�ұ����������ҵ�����ֹͣ
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