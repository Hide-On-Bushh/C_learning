#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

                                                     //��̬�ڴ����

//c���Կ��Դ����䳤���� -c99 arr[n]��vs������
//int main()
//{
//	//���ڴ�����10�����Ϳռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ�����һ��ԭ��
//		printf("%s", strerror(errno));//�ڴ�ռ���䲻��
//	}
//	else//����ʹ�ÿռ�
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
//	//����̬�ڴ�ռ䲻��ʹ�ã�����ϵͳ
//	free(p);//malloc��free�ɶ�ʹ��
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
//		printf("%d ", p[i]);//��ʼ��Ԫ��Ϊ0
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc  
//������̬�ڴ�ռ�

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
	//����20���ռ䲻���ã�������40��

	//                                             reallocע������
	// 
	//1.���pָ��Ŀռ����㹻�ڴ����׷�ӣ���ֱ��׷�ӣ�����p
	//2.�����������realloc��������һ���µ��ڴ�ռ�����
	//�����µ�һ���ڴ�ռ䣬����ԭ�����ݿ����������ͷžɵ��ڴ�ռ�
	//��󷵻��µ��ڴ�ռ��ַ
	//3.Ҫ��һ����ָ��������realloc����ֵ
//	int* ptr = (int*)realloc(p, INT_MAX);
//	{
//		if (ptr != NULL)//˵�����ٿռ�׷��ʧ����
//		{
//			p = ptr;//��ֹ��һ���ٿռ�ʧ�ܣ���pָ��ı�
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
/*int*p=realloc(NULL,40)*///�൱��malloc

 //                                                 ʹ�ö�̬�ڴ泣������

//1.��NULL���н����ò���  �ж��ڴ��Ƿ񿪱ٳɹ� if(p==NULL)

//2.�Զ�̬���ٵ��ڴ�Խ�����
//int* p = (int*)malloc(5 * sizeof(int));
//if (p == NULL)
//{
//	return 0;
//}
//else
//{
//	for (int i = 0; i < 10; i++)//Խ����� ֻ������5���ռ�
//		p[i] = i;
//}

//3.free�������ڷǶ�̬�������ڴ�
//int a = 20;
//int* p = &a;
//free(p);
//p = NULL;

//4.ʹ��free�ͷŶ�̬�����ڴ�һ����
//int* p = (int*)malloc(40);
//if (p == NULL)
//{
//	return 0;
//}
//for (int i = 0; i < 10; i++)
//{
//	*p++ = i;
//}
//���տռ� ���ʱ��pָ���ַ�Ѿ������ı��ˣ����뱨��ֻ���ͷ�ָ����ʼʱ��λ��
//*��p+i)��ʼ��ַ���±�ķ�ʽ���ԣ������ܸı�p++�ƶ�ָ��
//free(p);
//p == NULL;

//5.��ͬһ�鶯̬�ڴ����ͷ�
//free(p);
//free(p);

// ���������

void getmemory(char* p)//pҲ��һ����ַ���Ұ�str����NULL��������
{
	p = (char*)malloc(100);//���ٺ����һ����ַ����
}

void test(void)
{
	char* str = NULL;
	getmemory(str);//���ý�����p�ĵ�ַû�ô����������str�����Ǵ�ֵ�����Ǵ���ַ������ı�str��NULL��ֵ
	/*����ĳ���ȷ�����ǣ�&str)���ݵ�ַ    ���ձ��char* *p�Ե�ַ������   ���������free(str)
	ָ�봫��ַҪ�ö���ָ�����*/
	strcpy(str, "hello world");//������� str=NULL����һ����Ч�ĵ�ַ
	printf(str);
}

int main()
{
	test();
	return 0;
}

//��������   ����ջ�ռ��ַ
//char* getmemory(void)
//{
//	char p[] = "hello world";//�ֲ�����  ջ����ַ  ���صĵ�ַ�����������귵����ϵͳ��
//	return p;
//}
//
//void test(void)
//{
//	char* str = NULL;
//	str = getmemory();
//	printf(str);//��ַ��Ȼ�����Ǹ���ַ����ӡ���ֵ
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//����
//1.
//int* test()
//{
//	static int a = 10;//��̬��  ���ʱ��a�ĵ�ַ�ǲ����ٵĵ��ý�����
//	//int a = 10;ջ��
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
//	int* ptr = (int*)malloc(100);//���� Ҳû���⣬���صĵ�ַ���ڴ�ռ������ڣ�ֻ��free���ܷ����ռ�
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

//����ջ�ռ� ������Ĵ���
//int* f2(void)
//{
//	int* ptr;//û�ж����ʼֵ Ұָ��ֱ�ӽ��н����� �Ƿ������ڴ�
//	*ptr = 10;
//	return 0;
//}

//��������
//void getmemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void test(void)
//{
//	char* str = NULL;
//	getmemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//��ӡ��hello ���ڴ�й© û��free
//}
//int main()
//{
//	test();
//	return 0;
//}

//�������� �Ƿ������ڴ�
void test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free�����ָ����ΪNULL
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);//���ӡworld  �����ڷǷ����ʣ��ڴ涼����ϵͳ�˻�Ҫ��
	}
}