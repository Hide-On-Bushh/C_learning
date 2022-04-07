#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

输出由小写v组成的大V
#include <stdio.h>
int main()
{
	printf("v     v\n");
	printf(" v   v\n");
	printf("  v v\n");
	printf("   v\n");
	return 0;
}// \n转义字符

1234用八进制十六进制表示 缩短二进制
int main()
{
	printf("%#o %#X\n", 1234, 1234);//#前导作用 十六进制字母大写要打印大写%X 小写就%x
	return 0;
}

 反向输出数字
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

实现字母的大小写转换
getchar()获取一个字符
putchar()输出/打印一个字符
int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)//不加EOF的话，循环无法结束
	{//eof 可以使用^z结束循环
		printf("%c\n", ch + 32);
		getchar();//在调用一次getchar可以读取\n，每次输入回车键会有一个\n在缓冲区
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


十六进制数字ABCDEF输出为域宽15的十进制数
int main()
{
	//域宽m就是%md
// 0x16进制的格式就是%#d
//16进制数打印就是%X
	printf("%15d", 0xABCDEF);
	return 0;
}


输出hello world返回值

int main()
{
	//printf返回的是打印在屏幕上的个数
	int ret= printf("hello world");
	//不要在上面打\n否则返回值会多算一个字符
	printf("\n%d", ret);
	return 0;
}

简化版
int main()
{
	printf("\n%d", printf("Hello World"));
	return 0;
}

输出小数点后两位的实数
int main()
{
	double math_score = 0;
	scanf("%lf", &math_score);
	printf("%.2lf", math_score);//float 对应 %f
	return 0;
}


输入一个字符判断是否是字母，包括大小写

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		//还可以使用库函数判断字符是不是字母isalpha() 引用头文件include <ctype.h>
		//是字母反回非零的值
		//不是字母返回零
	{
		if ((ch >= 'a' && ch <= 'z') ||( ch >='A' && ch <= 'Z'))
			//if(isalpha(ch))是字母就为真
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		getchar();//处理\n
		//补充getchar返回类型是int
	}
	return 0;
}

输入一个字符 该字符构成金字塔

int main()
{
	char ch = 0;
	ch=getchar();//输入一个字符
	//输出金字塔
	int i = 0;
	for (i = 0; i < 5; i++)
		//打印空格
	{
		int j = 0;
		for (j = 0; j <= 4 - i; j++)
		{
			printf(" ");
		}
		//打印字符
		for (j = 0; j <= i; j++)
		{
			printf("%c ",ch);
		}
		printf("\n");
	}
		//打印字符
}

输入一行出生日期年月日 分三行输出年月日
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%4d%2d%2d" ,&year,&month,&day);//不可以直接一个%d，要留有域宽%md
	printf("year=%4d\n",year );
	printf("month=%02d\n", month);//0表示左边不够两位用0来补
	printf("day=%02d\n", day);//输入是虽然有0的输入但不会输出
	return 0;
}


通过移位运算符<<实现2的n次运算，输入n

int main()
{
	int n = 0;
	int sum = 0;
	//多组输入
	while(scanf("%d", &n)!=EOF);
	{
		//2的n次方
		printf("%d", 1<<n);
	}
	return 0;
}


计算BMI指数   体重除以身高米平方

int main()
{
	int weight = 0;
	int high = 0;
	double bmi = 0;
	scanf("%d %d", &weight, &high);
	double BMI = weight / ((high / 100.0) * (high / 100.0));
	printf("%.2lf", BMI);//结果保留两位小数
}


给出三角形三条边   计算三角形周长和面积
#include <math.h>
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	double cir = 0;
	double are = 0;
	scanf("%lf %lf %lf", &a, &b, &c);
	//计算
	printf("%.2lf", (cir = a + b + c));
	double p = cir/ 2;
	printf("%.2lf", (are = sqrt(p*(p-a)*(p-a)*(p-c))));
	return 0;
}


计算球体的体积
#include <math.h>
int main()
{
	//输入
	double r = 0.0;
	double p = 3.1415926;
	scanf("%lf", &r);
	//计算
	double V = (4.0 / 3) * p * pow(r,3);//易错点:4.0得有一个小数点零才能算出小数不然等于1
	//输出
	printf("%.3lf", V);
	return 0;
}


求五位数中的变种水仙花数    一个数字拆开相乘等于数字
例如655=6*55+65*5

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


100以内加减   例如85+40=25

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	//计算
	sum = (a%100 + b%100)%100;
	printf("%d", sum);
	return 0;
}


得到浮点数的个位数

int main()
{
	double a = 13.141;
	int Num = ((int)a) % 10;
	printf("%d", Num);
	return 0;
}


活了多少秒  一年等于3.156*10^7s
输入 631200000  int类型不够放，放入long long
#include <math.h>
int main()
{
	int age = 0;
	//输入
	scanf("%d", &age);
	double S = 3.156e7;//等同于10^7
	//计算
	long long sum = age * S;
	printf("%lld", sum);
	return 0;
}