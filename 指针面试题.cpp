#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//��һ��
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//����ĵ�ַ���ܴ�������ָ�룬����ǿ������ת��
//	printf("%d,%d", *(a + 1), *(ptr - 1));//ptr-1��ǰŲ��һ������
//	return 0;
//}
//2 5

//�ڶ���
//struct Test
//{
//	int Num;
//	char* pcname;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p��ֵΪ0x100000�����±��ʽΪ���٣�
////��֪�ṹ��test���ͱ�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);//�ṹ��ָ���һ����һ���ṹ��20�ֽڣ�0x00100014
//	printf("%p\n",(unsigned long) p + 0x1);//ǿ������ת��Ϊ���� ������1���Ǽ�1 0x001000001
//	printf("%p\n", (unsigned int*) p + 0x1);//100004�޷���int��ָ������һ���޷������;��� 0x00100004
//	return 0;
//}

//������

//int main()
//{
//	int a[4] = { 1,2,3,4 };//С�˴洢
//	//01 00 00 00   02 00 00 00  03 00 00 00  04 00 00 00
//	int* ptr1 = (int*)(&a + 1);//�����ַ��һ
//	int* ptr2 = (int*)((int)a + 1);//a��ַת����int��1��������ַ���һ���ֽ�
//	//��a[0]���׵�ַǿ��ת��Ϊ int �ͣ��ټ�1�������� int ��������ӣ���ֵΪa[0]�ڶ����ֽڵĵ�ַ��
//	//��(int)a + 1 ָ��ͼ�еĵ�ַ1������*ptr2��int���ͣ�����*ptr2�����a[0]�ĵڶ����ֽڵ�a[1]�ĵ�һ���ֽڵ�����
//	printf("%x,%x", ptr1[-1], *ptr2);//04 2000000
//	return 0;
//}

//������

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	//���ű��ʽ�������һ��ֵ��a[3][2]={1,3,5}
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//*(p+0)=p[0]
//	return 0;
//}

//������
//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//���Ͳ�ͬ�о��棬��p����ָ����Ԫ�ص�ַ��p[4]ÿ�������ĸ�int��Ԫ��
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//p[4][2]=*(*(p+4)+2)
//	// 
//	//%p��ʽ��ӡ-4��ӡ���ǲ��룬����ַ���޷��������Խ��Ϊ FF FF FF FC
//	return 0;
//}

//������

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* ptr1 = (int*)(&aa + 1);//��������ָ���һ�������ת��Ϊint*
//	int* ptr2 = (int*)(*(aa + 1));//�൱��aa[1] �ڶ�����Ԫ�ص�ַ
//	printf(" %d, %d",*(ptr1-1),*(ptr2-1));
//return 0;
//}

//������

//int main()
//{
//	const char* a[] = { "work","at","alibab" };//�ַ�ָ���������ַ�������Ԫ�ص�ַ
//	const char**pa= a;//����ָ��ָ��ÿ���ַ�������ĸԪ�ص�ַ
//	pa++;//�൱������һ��char*��ָ��
//	printf("%s\n", *pa);
//	return 0;
//}��ӡ�� at

//�ڰ���

//int main()
//{
//	const char* c[] = { "ENTER","NEW","POINT","FIRST" };//c���������ĸ�char*ָ�룬�ĸ�ָ��ֱ�ָ���ĸ��ַ�����Ԫ�ص�ַ
//	char** cp[] = {  c + 3,c + 2,c + 1,c };//cp�������ĸ�char**Ԫ��ָ�� c�൱����Ԫ�ص�ַ
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//��++cpp��char***��ָ��c+2����һ��*�����õ�cp�ڴ�c+2���ڽ�����c+2��ӡ�ַ���point
//	printf("%s\n", *--*++cpp+3);//��++cppָ��c+1������,����-- cpָ��c��enter�����ã�+3ָ��ָ��enter�������ַ����ӡer
//	printf("%s\n", *cpp[-2]+3);//cpp[-2]=*(cpp-2)�õ�c+3�����ݣ�c+3ָ��first�ڽ�����+3ָ����first������λ��ӡst
//	printf("%s\n", cpp[-1][-1]+1);//*((*��cpp-1))-1)��ָ��new����+1��ӡew
//	//�״��:��ӡ�����е�cpp[-2]ָ��λ��ֻ��++cpp--cpp�Ż��ƶ���cpp-2û�ƶ�λ�ã������Ĳ���ͣ���ڵڶ���
//	return 0;
//}

//ˮ�ɻ���
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000000; i++)
//	{
//		//�ж��Ƿ���ˮ�ɻ��� ��ÿһλ����������֮�͵������ֱ���
//		//1.����i��λ�� - nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;//ÿ�ζ���Ҫ������Ƕ���������Ҫ�ڿ�ͷ����
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����iÿһλ��n�η�֮��
//		 tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�ж�i�Ƿ����sum
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}


//����k���ַ��� 
//��ABCD��һ�� ���BCDA
#include <string.h>

//������ⷨ
//void move_left(char* arr, int k)
//{
//	/*assert(arr != NULL);*///���ϰ�� ����ָ��arr����Чֵ,���ǿ�ָ��
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		int tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + 1 + j);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}

//������ת��
//abcdef
// ba fedc�ֳ������� ��� �ұ߶�����
//cd efab��������
//

//void reverse(char* left,char* right)
//{
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void move_left(char* str, int k)
//{
//	int len = strlen(str);
//	reverse(str,str+k-1);//�������
//	reverse(str+k,str+len-1);//�����ұ�
//	reverse(str,str+len-1);//��������
//}
// 
//int main()
//{
//	char arr[] = { "abcde" };
//	move_left(arr, 2);
//	printf("%s", arr); 
//	return 0;
//}



//�ж��ַ����ǲ�������ת�����ķ���
//#include <string.h>
//int if_move_left(char* str1,char* str2)
//{
//	int len1 = strlen(str1);
//	//1.��str1�ַ���׷��һ���Ӵ� 
//	//strcat   strcat(str1,str1)�Ǵ�ģ������Լ����Լ�����׷�ӱ����ַ�������Ϊ����û��\0
//	//strncat�Լ����Լ�׷��
//	int len2 = strlen(str2);
//	if (len1 == len2)
//		return 0;//������Ƚ��ַ������ȣ�arr2����cdefҲ�᷵��yes
//	strncat(str1, str1, len);
//	//2.�ж��ַ���str2ָ����ַ����ǲ���str1�Ӵ�
//	char* ret = strstr(str1, str2);//��str1���Ӵ�������û��str2
//	//�ҵ�֮�󷵻ص��ǵ�ַ������str2=cdefab����c��ַ��û�ҵ����ؿ�ָ��
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret=if_move_left(arr1, arr2);
//	if (ret = 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	
//	return 0;
//}


//���Ͼ���
//�����ҵ��������ϵ��µ���
// �����Ͼ����в���ĳ������
//ʱ�临�Ӷ�С��O(N)��n��Ԫ�أ�����һһȥ��������

//int FindNum(int arr[3][3], int k, int *px, int *py)
//{
//	//�Ӿ������Ͻǻ������½����ֲ��ң����������ϽǺ����½����ֲ���
//	int x = 0;
//	int y = *py - 1;//�������Ͻ�Ԫ��
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;//������Ͻ�Ԫ�ش���Ҫ�ҵ�����k��˵���϶��������Ͻ��������ڵ���
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;//���Ͻ�Ԫ��С��k���϶��������Ͻ�Ԫ�����ڵ��У���Ϊ���Ͻ�Ԫ������������ֵ������
//		}
//		else
//		{
//			*px = x;
//			*py = y;//�ҵ���Ԫ�ز����±��ַ����ȥ
//			return 1;
//		}
//	}return 0;//����ѭ��˵����������Ҳû�ҵ��������
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 3;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);//���а���ַ����ȥ,
//	//�����Ͳ���
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("Ԫ���±�Ϊ��%d %d", x, y);
//	}
//	else 
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}