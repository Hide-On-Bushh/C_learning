#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*printf("%d\n",sizeof(char *));
	printf("%d\n",sizeof(int *));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(double*));*///����4�ֽ�
	return 0;
}

int main()
{
	int a = 0x11223344;
	//int* pa = &a;//��ַ���� 44 33 22 11
	//*pa = 0;//��ַ�����ĸ��ֽڻ��� 00 00 00 00 *int�����ĸ��ֽ�
	char* pc = &a;
	*pc = 0;//��ַ���ݱ�� 00 33 22 11 ָ�����;��������÷��ʿռ��С
	return 0;
}

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);//��ַ��4
	printf("%p\n", pc);
	printf("%p\n", pc+1);//��ַ��1
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;//������-��Ԫ�ص�ַ
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;//������ÿ�����ָĳ�1
	}
	return 0;
}

int main()
{
	int a;//�ֲ���������ʼ����Ĭ�����ֵ
	int* p;//�ֲ���ָ���������ʼ�����ֵ
	*p = 20;//��㸳ֵ
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		p++;//��ָ��ָ��ķ�Χ��������arr��Χʱ��p����Ұָ��
	}
	return 0;
}

ָ��ָ��ռ��ͷ�

int * test()
{
	int a = 10;//һ����test��a�ĵ�ַ�Ͳ������ǵ��ˣ��ռ��Ѿ����ͷ�
	return &a;
}

int main()
{
	int*p=test();//���ܵ����Ƿ��صĵ�ַ
	*p = 20;//��Ҫ��10�ĳ�20�Ѿ��Ҳ���ԭ��a�ĵ�ַ�ˣ���ַ�Ѿ��ڳ��������ظ�ϵͳ��
	return 0;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		printf(" %d", *p);
		p++;
	}
	return 0;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d", &arr[9] - &arr[0]);//ָ���ָ��õ�����Ԫ�ظ���
	return 0;
}

�����ַ������ȣ���ָ��ķ���

int my_strlen(char* len)
{
	char* start = len;//lenָ���ַ�����ʼλ��
		char* end = len;
		while (*end != '\0')
		{
			end++;
		}
		return end-start;//ָ���ָ�����Ԫ�ظ���
}

int main()
	{
	//strlen - ���ַ�������
	char arr[] = "bit";
	int len=my_strlen(arr);
	printf("%d", len);
	return 0;
	}

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//-��Ԫ�ص�ַ
	printf("%p\n", arr+1);//+4

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);//+4

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);//���28 16���ƾ͵���32+8

	//&arr - &������ - �����������������Ԫ�ص�ַ����ʾ�������� - &������ ȡ��������������ĵ�ַ
	//sizeof(arr) - sizeof(������) - ���������������� - sizeof(������)��ʾ��������Ĵ�С
	return 0;
}

�����ָ��Ĺ�ϵ
int main()
{
	int arr[10] = { 0 };
	int* p = arr;//��Ԫ�ص�ַ�ŵ�ָ��p��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i)=i;//p+i�൱��Ԫ�ص�ַ����*������,�ٸ�ֵi���൱�ڰ����鸳ֵ0����i
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%p===============%p\n", p + i, &arr[i]);//ָ��p������i   ��ӡ�±�i�ĵ�ַ  ������ʽ���Ǵ�ӡ��ַ
	//}
}

int main()
{
	int a = 10;
	int* pa = &a;
	int* * ppa = &pa;//ppa���Ƕ���ָ��
	**ppa = 20;
	printf("%d", **ppa);
	printf("%d", a);
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };//ָ�����飬ʵ���Ͼ��Ǵ��ָ�������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(&arr[i]));
	}
	return 0;
}

ָ����ϰ

#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5, };
	short* p =(short*)arr;//int����ָ������ĸ��ֽڣ���intǿ��ת����short���ͣ�shortֻ�ܷ��������ֽ�
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;//p+0��Ԫ��1��ǰ�����ֽڱ��0�ˣ�p+1�ѵ�һ��Ԫ��1�������ֽڱ���㣬���ǵ�һ��Ԫ�ؾ͵���0�ˣ�ͬ��
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);//0 0 3 4 5
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a); // a�ĵ�ַ��ʽΪ44 33 22 11 char* pcֻ�ܷ���һ���ֽڣ�����44�ͱ�Ϊ00
	return 0;
}

#include <stdio.h>
int i;//ȫ�ֱ���-����ʼ��-Ĭ��Ϊ0
int main()
{
	i--;
	//-1
	//1000000000000000000001 ԭ��
	//1111111111111111111111 ����
	if (i > sizeof(i))//sizeof()-�������/������ռ�ڴ�Ĵ�С ����������޷�����
	{
		printf(">\n");//����˭��sizeof���㶼����Ǹ�����Ϊ�޷�����������i�����Ǹ���
	}
	else
	{
		printf("<\n");
	}
	return 0;
}

int main()
{
	char arr[] = "abcdef";
	char* p = arr;
	printf("%s", arr);��ӡ������abcdef
	return 0;
}

int main()
{
	char* p = (char*)"ae";//����һ�������ַ���,��ae���ַ��ĵ�ַ�ŵ���ָ��
	printf("%c",p );//��ӡһ���ַ�a
	printf("%s",p );//��ӡ�ַ���
	return 0;
}

int main()
{
	constant char* p = "abcdef";
	*p = 'w';//�����ַ����ǲ��ܱ��޸ĵ�
	printf("%s\n", p);
	return 0;
}

��ָoffer������
int main()
{
	char arr1[] = "abcd";
	char arr2[] = "abcd";
	const char* p1 = "abcd";
	const char* p2 = "abcd";
	if (arr1 == arr2)������ͬ����������������ͬ�������Ԫ�ص�ַ������ͬ
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");//
	}
	if(p1==p2)//p1p2ָ����ͬһ�������ַ�����ַ�������ַ���ͨ���ᴢ�浽һ���������ڴ�����
	{��������ָ��ָ��ͬһ��������ָ��ͬһ���ڴ�
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}

int main()
{
	int arr[10] = { 0 };//��������
	char ch[5] = { 0 };//�ַ�����
	int* parr[4];//�������ָ�������
	char* pch[4];//����ַ�ָ�������
}

ָ��������÷�
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}

����ָ��

int main()
{
	int* p = NULL;//p������ָ�� - ָ�����͵�ָ�� ������εĵ�ַ
	char* pc = NULL;//pc���ַ�ָ�� ָ���ַ���ָ�� ����ַ��ĵ�ַ
	int arr[10] = { 0 };
	//arr - ��Ԫ�ص�ַ
	//&arr[0] ��Ԫ�ص�ַ
	//&arr - ��������ĵ�ַ
	return 0;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10] = &arr;//p��������ָ�룬�����ַҪ�����������������ʱ��*���ǽ����ò���

	char* arr[5];
	char *(*pa1)[5] = &arr;//paָ������� *˵��paָ�� [5]paָ�����������Ԫ�� char*��Ԫ������
	//char*�Ǳ�����ֵ���Ըı䣬 char[]�ǳ�����ֵ���ܸı�
	int arr2[10] = { 0 };
	int (*pa2)[10] = &arr2;
	return 0;
}

void print1(int arr[3][5], int x, int y)//�������������ʽ
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int(*p)[5], int x, int y)//������ָ�룬*p�Ǳ���������һ������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", (*(p + i))[j]);//pָ��ָ��һ������5��Ԫ�أ�+i������һ�����飬*����������һ�е�Ԫ��
			//�ȼ���p[i][j]  *(p[i]+j)
		}
	}
}
int main()
	{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
		return 0;
	}

int main()
{
	//�ַ�ָ��
	char ch = 'w';
	char* p = &ch;
	const char* p2 = "abcdef";//p2ָ���ַ������ַ���ַ��һ��ָ���ĸ��ֽڴ治��

	//ָ������ - ���� - ���ָ�������
	int* arr[10];//arr������10��int*��Ԫ��
	char* ch[5];

	//����ָ��
	int* p3;//����ָ�� 
	char* p4;//�ַ�ָ��

	int arr2[5];//����
	int(*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
	return 0;
}

int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	//&������ - ���������Ǻ����ĵ�ַ
	/*printf("%p", ADD);
	printf("%p", &ADD);*/
	int (*pa)(int, int) = ADD;
	printf("%d\n",(*pa)(2, 3));//����ָ���ź�����ַ��ָ�� ��ӡ������ַ������
	return 0;
}

void print(const char* str)
{
	printf("%s\n", str);
}

int main()
{
	void(*p)(const char*) = print;
	(*p)("helloWorld");//p��ĵ�ַ
	return 0;
}

����ָ�� ����1

 (*(void (*)())0)()
    void(*)() - ����ָ������
      void(*)()0 - 0��һ����ַ �Ѻ���ָ�����ͼ�������ǿ������ת�� ת����0�ǵ�ַ��
       ( *(void(*)())0  ) 0�������ַ�����*������ ���ӣ�������

����2 

����int ADD��int,int)
   ��һ��int�Ǻ�����������  �������������int�Ͳ���  ADD������

viod(*              signal(int,void(*)(int)))            (int);   
                     ������  int�� ����ָ����
signal��һ����������
signal������������һ��int�ͣ�һ������ָ���ͣ���ָ��ָ��int���ͣ�����������void
signal��������Ҳ�Ǻ���ָ�룬ָ�����Ĳ���int����������void

int ADD(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;

}
int div(int x, int y)
{
	return x / y;
}
int mul(int x, int y)
{
	return x * y;
}

int main()
{
	int* arr[5];//ָ������
	//��Ҫһ���������ĸ�������ַ --����ָ������
	int (*pa)(int, int) = ADD;

	int (*parr[4])(int, int) = {ADD,sub,div,mul};//����ָ������

	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", parr[i](2, 3)); 
	}
	return 0;
}

��ϰ

char* my_strcpy(char* dest, const char* src);
дһ������ָ��pf��ָ��my_strcpy
char* (*pf)(char*, const char*);
дһ������ָ������pfArr���ܹ�����ĸ�������ַ
char* (*pfArr[4])(char*, const char*) = {};
�����Ǹ����� pfarr[4], ������д����ָ�룬�ټ���[]

                   ������
void menu()
{
	printf("******************************\n");
	printf("****1.Add        2.Sub    ****\n");
	printf("****3.Mul        4.Div    ****\n");
	printf("******     0.exit         ****\n");
	printf("******************************\n");
}

int ADD(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

�ص�����

void Calc(int(*pf)(int, int))//���ú���ָ����պ�����ַ
{
	int x = 0;
	int y = 0;
	printf("�������������֣�\n");
		scanf("%d %d", &x, &y);
		printf("%d", pf(x, y));
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(ADD);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("���˳�\n");
			break;
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
}

�򻯰� ����ָ���������case���
int main()
{
	int a = 0;
	int x = 0;
	int y = 0;
	int (*pfArr[5])(int, int) = { 0,ADD,Sub,Mul,Div };
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &a);
		if (a >= 1 && a <= 5)
		{
			printf("�������������֣�");
			scanf("%d %d", &x, &y);
			int ret = (*pfArr[a])(x, y);
			printf("%d\n", ret);
		}
		else if (a == 0)
		{
			printf("���˳�\n");
		}
		else
		{
			printf("�������������ѡ��\n");
		}
	} while (a);//a=0 �ͻ��˳�����
	return 0;
}

	�ظ�����̫�࣬�ڴ�����
	int main()
	{
		int a = 0;
		int x = 0;
		int y = 0;
		do
		{
			menu();
			printf("��ѡ��");
			scanf("%d", &a);
			printf("�������������֣�");
				scanf("%d %d", &x, &y);
				/*switch (a)
				{
				case 1:
					printf("%d",(Add(x, y)));
					break;
				case 2:
					printf("%d",(Sub(x, y)));
					break;
				case 3:
					printf("%d",(Mul(x, y)));
					break;
				case 4:
					printf("%d", (Div(x, y)));
					break;
				case 0:
					printf("���˳�\n");
				default:
					printf("�������\n");
				}
		}while(a);
		return 0;
	}*/

ָ����ָ�������ָ��
int ADD(int x, int y)
{
	return x + y;
}

int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//ȡ������ĵ�ַ
	int (*pf)(int, int);//����ָ��

	int(*pfArr)[4](int, int);//pfarr��һ������ - ����ָ������
    int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr��һ������ָ�룬ָ��ָ����ָ���������ĸ�Ԫ��
	//ÿ��Ԫ��������һ������ָ�� int(*)(int , int)
	return 0;
}

void print(const char* str)
{
	printf("hehe:%s", str);
}

void test(void (*p)(const char*))//���պ��������൱�ڽ��յ�ַ��дһ��ָ�����������ָ��
{
	printf("test\n");
	p("bit");//��ָ��һ����������test�����ڲ�pָ��ĺ������ú���
}

int main()
{
	test(print);
	return 0;
}

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//���������
	for (i = 0; i < sz; i++);
	{
		int j = 0;
		//ÿ������Ĵ���
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

qsort��������

#include <stdlib.h>
#include <string.h>
int cmp_int(const void* e1,const void* e2)
{
	return *(const int*)e1 - *(const int*)e2;//�����ñȽϴ�С
}
void test1()
{
	int i = 0;
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);//com_int�ȽϷ�ʽ
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_float(const void* e1, const void* e2)
{
	return ((int)*(const float*)e1 - *(const float*)e2);//��Ϊ�õ��Ľ��������int��
}
void test2()
{
	int i = 0;
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n");
}

struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_age(const void* e1, const void* e2)
{
	return ((const struct Stu*)e1)->age - ((const struct Stu*)e2)->age;//��ǿ������ת���ɽṹ��ָ��Ƚ�
}//�ṹ��Ƚϲ���ֱ�ӱȽ�
void test3()
{
	struct Stu s[3] = { {"Wang",30},{"Li",20},{"Zhang",40} };
	int i = 0;
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_age);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", s[i].age);
	}
	printf("\n");
}

//�ṹ�������ֵıȽ����ַ��Ƚ� ����ֱ�Ӵ��ڵ���С�ڱȽ�
//strcmp
int cmp_stu_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test4()
{
	struct Stu s[3] = { {"Wang",30},{"Li",20},{"Zhang",40} };
	int i = 0;
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_name);
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name);
	}
	printf("\n");
}

void Swap(char* buf1, char* buf2, int width)
//һ���ַ�һ���ַ��Ľ���
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1,const void* e2))//��ð������ʵ�ָ������͵�����
//width��һ�������Ĵ�С����λ���ֽڣ�����forѭ���Ƚ�
//����������������void* e1 e2����Ҫ�Ƚ��������ĵ�ַ
//����qsort���
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1;i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
				//������Ƚϲ��������Ϳ����Ƚ�Ԫ��ǿ��ת����char*��һ���ֽ�һ���ֽ��㣩��width
			{
				//�Ƚ��꽻��
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				//������Ҫ֪��һ��Ԫ�ض�����һ���ַ�һ���ַ��������Դ��μ���width
			}
		}

	}
	printf("\n");
}
void test6()
{
	int i = 0;
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d " ,arr[i]);
	}
	printf("\n");
}
void test5()
{
	int i = 0;
	struct Stu s[3] = { {"Wang",30},{"Li",20},{"Zhang",40} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_age);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", s[i].age);
	}
	printf("\n");
}
int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	return 0;
}