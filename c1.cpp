#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

�����Сдv��ɵĴ�V
#include <stdio.h>
int main()
{
	printf("v     v\n");
	printf(" v   v\n");
	printf("  v v\n");
	printf("   v\n");
	return 0;
}// \nת���ַ�

1234�ð˽���ʮ�����Ʊ�ʾ ���̶�����
int main()
{
	printf("%#o %#X\n", 1234, 1234);//#ǰ������ ʮ��������ĸ��дҪ��ӡ��д%X Сд��%x
	return 0;
}

 �����������
int main()
{
	int n = 0;
	scanf("%d", &n);
	while (n)
	{
		int ret = n % 10;
		n /= 10;
		printf("%d", ret);
	}
	return 0;
}

ʵ����ĸ�Ĵ�Сдת��
getchar()��ȡһ���ַ�
putchar()���/��ӡһ���ַ�
int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)//����EOF�Ļ���ѭ���޷�����
	{//eof ����ʹ��^z����ѭ��
		printf("%c\n", ch + 32);
		getchar();//�ڵ���һ��getchar���Զ�ȡ\n��ÿ������س�������һ��\n�ڻ�����
	}
	return 0;
}

int main()
{
	printf("      * *      \n");
	printf("      * *      \n");
	printf("  ***** *****      \n");
	printf("  ***** *****\n");
	printf("      * *\n");
	return 0;
}


ʮ����������ABCDEF���Ϊ���15��ʮ������
int main()
{
	//���m����%md
// 0x16���Ƶĸ�ʽ����%#d
//16��������ӡ����%X
	printf("%15d", 0xABCDEF);
	return 0;
}


���hello world����ֵ

int main()
{
	//printf���ص��Ǵ�ӡ����Ļ�ϵĸ���
	int ret= printf("hello world");
	//��Ҫ�������\n���򷵻�ֵ�����һ���ַ�
	printf("\n%d", ret);
	return 0;
}

�򻯰�
int main()
{
	printf("\n%d", printf("Hello World"));
	return 0;
}

���С�������λ��ʵ��
int main()
{
	double math_score = 0;
	scanf("%lf", &math_score);
	printf("%.2lf", math_score);//float ��Ӧ %f
	return 0;
}


����һ���ַ��ж��Ƿ�����ĸ��������Сд

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		//������ʹ�ÿ⺯���ж��ַ��ǲ�����ĸisalpha() ����ͷ�ļ�include <ctype.h>
		//����ĸ���ط����ֵ
		//������ĸ������
	{
		if ((ch >= 'a' && ch <= 'z') ||( ch >='A' && ch <= 'Z'))
			//if(isalpha(ch))����ĸ��Ϊ��
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		getchar();//����\n
		//����getchar����������int
	}
	return 0;
}

����һ���ַ� ���ַ����ɽ�����

int main()
{
	char ch = 0;
	ch=getchar();//����һ���ַ�
	//���������
	int i = 0;
	for (i = 0; i < 5; i++)
		//��ӡ�ո�
	{
		int j = 0;
		for (j = 0; j <= 4 - i; j++)
		{
			printf(" ");
		}
		//��ӡ�ַ�
		for (j = 0; j <= i; j++)
		{
			printf("%c ",ch);
		}
		printf("\n");
	}
		//��ӡ�ַ�
}

����һ�г������������� ���������������
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%4d%2d%2d" ,&year,&month,&day);//������ֱ��һ��%d��Ҫ�������%md
	printf("year=%4d\n",year );
	printf("month=%02d\n", month);//0��ʾ��߲�����λ��0����
	printf("day=%02d\n", day);//��������Ȼ��0�����뵫�������
	return 0;
}


ͨ����λ�����<<ʵ��2��n�����㣬����n

int main()
{
	int n = 0;
	int sum = 0;
	//��������
	while(scanf("%d", &n)!=EOF);
	{
		//2��n�η�
		printf("%d", 1<<n);
	}
	return 0;
}


����BMIָ��   ���س��������ƽ��

int main()
{
	int weight = 0;
	int high = 0;
	double bmi = 0;
	scanf("%d %d", &weight, &high);
	double BMI = weight / ((high / 100.0) * (high / 100.0));
	printf("%.2lf", BMI);//���������λС��
}


����������������   �����������ܳ������
#include <math.h>
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	double cir = 0;
	double are = 0;
	scanf("%lf %lf %lf", &a, &b, &c);
	//����
	printf("%.2lf", (cir = a + b + c));
	double p = cir/ 2;
	printf("%.2lf", (are = sqrt(p*(p-a)*(p-a)*(p-c))));
	return 0;
}


������������
#include <math.h>
int main()
{
	//����
	double r = 0.0;
	double p = 3.1415926;
	scanf("%lf", &r);
	//����
	double V = (4.0 / 3) * p * pow(r,3);//�״��:4.0����һ��С������������С����Ȼ����1
	//���
	printf("%.3lf", V);
	return 0;
}


����λ���еı���ˮ�ɻ���    һ�����ֲ���˵�������
����655=6*55+65*5

int main()
{
	int i = 0;
	
	for (i = 10000; i<=99999; i++)
	{
		int sum = 0;
		for(int j=10;j<=10000;j*=10)
		{
			
			sum += (i / j) * (i % j);
			
		}
		if (sum == i)
		{
			printf(" %d", i);
		}
	}
	return 0;
}


100���ڼӼ�   ����85+40=25

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	//����
	sum = (a%100 + b%100)%100;
	printf("%d", sum);
	return 0;
}


�õ��������ĸ�λ��

int main()
{
	double a = 13.141;
	int Num = ((int)a) % 10;
	printf("%d", Num);
	return 0;
}


���˶�����  һ�����3.156*10^7s
���� 631200000  int���Ͳ����ţ�����long long
#include <math.h>
int main()
{
	int age = 0;
	//����
	scanf("%d", &age);
	double S = 3.156e7;//��ͬ��10^7
	//����
	long long sum = age * S;
	printf("%lld", sum);
	return 0;
}