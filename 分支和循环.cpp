#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>	//头文件
//int main()
//{
	/*int age=20;
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age <= 28)
		printf("青年\n");*/

//int age = 15;
//if (age < 18)
//{
		//	printf("未成年\n");
		//	printf("不能谈恋爱\n");//打印多条语句要用{}
		//}
		//else if (age >= 18 && age <= 28)
		//	printf("青年\n");

		///*int a = 0;
		//int b = 2;
		//if (a == 1)
		//	if (b == 2)
		//		printf("hehe\n");
		//	else
		//		printf("haha\n");else只和离它最近的if匹配

		/*int num = 4;
		//if (num = 5)
		{
			printf("hehe\n");赋值= 判断相等要用==
		}*/

		/*int i=1;
		while(i<=100)
		{
		if (1 == i % 2)
		printf("%d\n",i);
		i++;
		}练习：1—100中的奇数*/

		/*int i = 1;
			while (i <= 100)
			{
				printf("%d ", i);
				i += 2;
			}同上*/

			/*int day = 0;
			scanf("%d", &day);
			switch (day)
			{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				printf("工作日\n");
				break;
			case 6:
			case 7:
				printf("休息日\n");
				break;
			default:
				printf("输入错误\n");
				break;
			}switch语句应用*/

			/*int n = 1;
				int m = 2;
				switch (n)
				{
				case 1:m++;
				case 2:n++;
				case 3:
					switch (n)
					{
					case 1:n++;
					case 2:m++; n++; break;
					}
				case 4:m++;
					break;
				deafult:
					break;
				}
				printf("m=%d,n=%d\n", m, n);switch练习*/

				/*int i = 1;
				while (i <= 10)
				{
					printf("%d ", i);
					i++;0
				}打印出数字1-10*/

				/*int i = 1;
				while (i <= 10)
				{
					i++;
					if (i == 5)
						continue;
					printf("%d ", i);
				}*/
				/*int ch = 0;
				while((ch=getchar())!=EOF)
				putchar(ch);*/

				/*int ch = 0;
				while ((ch = getchar()) != EOF)
				{
					putchar(ch);
				}*/

				//   int ret = 0;
				   //int ch = 0;
				//   char password[20] = { 0 };
				   //printf("请输入正确密码:>");
				   //scanf("%s\n", password);//输入密码，并放在password数组中
				   ////输入密码后回车后缓冲区剩余'\n'
				   //while ((ch = getchar())!= '\n')
				   //{
				   //	;
				   //}
				   //printf("请确认（Y/N）:>");
				   //ret = getchar();
				   //if (ret == 'Y')
				   //{
				   //	printf("确认成功\n");
				   //}
				   //if (ret == 'N');
				   //{
				   //	printf("确认失败\n");
				   //}

				  /*  int ch = 0;
				   while ((ch = getchar()) != EOF)
				   {
				   if (ch < '0' || ch>'9')
					   continue;
				   putchar(ch);
				   }打印0——9的数字，不会打印字母*/

				   //int i= 0;
				   //for(i=1;i<=10;i++)
				   //{
				   //	if (i == 5)
				   //		continue;
				   //printf("%d ", i);
				   //}

				   //int i = 0;
				   //int j = 0;
				   //for (i=0; i < 10; i++)
				   //{
				   //	for (j=0; j < 10; j++)
				   //	{
				   //		printf("hehe\n");
				   //	}
				   //}可以打印100个hehe
				   //
				   //int i = 0;
				   //int j = 0;
				   //for (;i<10;i++)
				   //{
				   //	for (;j<10;j++)
				   //	{
				   //		printf("hehe\n");
				   //	}
				   //}只能打印10个呵呵

				   //int i = 0;
				   //int k = 0;
				   //for (i = 0, k = 0; k = 0; i++, k++)//k=0为假，不循环，循环0次。条件句改为非零的数就是死循环。
				   //k++;

				   //int i = 0;
				   //int n=0;
				   //int ret = 1;
				   ////scanf("%d", &n);
				   //for (i=1;i<=n;i++)
				   //{
				   //	ret=ret*i;
				   //}
				   //printf("ret=%d\n", ret);//n的阶乘

				   //int i = 0;
				   //int n = 0;
				   //int ret = 1;
				   //int sum = 0;
				   //for (n = 1; n <= 3; n++)
				   //{
				   //	ret = ret * n;
				   //	sum = sum + ret;
				   //}
				   //printf("sum=%d\n", sum);阶乘相加

				   //int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
				   //int k = 7
				   //
				   //int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
				   //int left = 0;//左下标
				   //int right = sz - 1;//右下标
				   //while(left<=right)
				   //int mid = (left + right) / 2;
				   //if (arr[mid] > k)
				   //{
				   //	right = mid - 1;
				   //}
				   //else if (arr[mid] < k)
				   //{
				   //	left = mid + 1;
				   //}
				   //else
				   //{
				   //	printf("找到下标了,下表是：%d\n",mid);
				   //	break;
				   //}在整形数组中用二分法找数字并找到下标

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
////{
	//char arr1[] = "welcome to bit!!!!!!";
	//char arr2[] = "####################";
	//int left = 0;
	//int right = strlen(arr1) - 1;//计算字符串长度-1
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);//休息一秒
	//	Sleep(1000);
	//	system("cls");//执行命令的一个函数--清空屏幕
	//	left++;
	//	right--;
 //   }
	//printf("%s\n", arr2);屏幕出现#变成arr1

	//int i = 0;
	//char password[20];
	//for (i = 0; i < 3; i++)
	//{
	//	printf("请输入密码");
	//	scanf("%s", password);
	//	if (strcmp(password, "123456") == 0)//==不能用来比较两个字符串是否相等，应该用一个库函数-strcmp
	//	{
	//		printf("登陆成功");
	//		break;
	//	}
	// else
	// {
	// printf（"密码错误\n"）;
	// }
	//}
	//if (3 == i)
	//	printf("三次登陆失败，请退出\n");登录系统登录三次错误

 #include <stdio.h>

//int main()
//{
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d %d %d", &a, &b, &c);//算法实现abc三个数依次是最大值输出
	//if (a < b)
	//{
	//	int tmp = a;
	//	a = b;
	//	b = tmp;
	//}
	//if (a < c)
	//{
	//	int tmp = a;
	//	a = c;
	//	c = tmp;
	//}
	//if (b < c)
	//{
	//	int tmp = b;
	//	b = c;
	//	c = tmp;
	//}
	//printf("%d %d %d",a,b,c);输入三个数按从大到小排列

//int i = 0;
//for(i=1;i<=100;i++)
//	if (i % 3 == 0)
//	{
//		printf("%d\n", i);
//	}输出1--100能整除3的数

//int year = 0;
//int count = 0;
//for(year=1000;year<=2000;year++)
//	if (year % 4 == 0&&year%400!=0)
//	{
//		printf("%d ", year);
//		count++;
//	}
//printf("\ncount=%d\n", count);

//int i = 0;
//int count = 0;
//	for(i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 ||i/10==9)
//			count++;
//	}
//printf("count=%d ", count);//1--100出现数字9的个数

//int i = 0;
//double sum = 0.0;
//int flag = 1;
//for (i = 1; i <=100; i++)
//{
//	sum+=flag*1.0/i;
//	flag = -flag;
//}
//printf("sum=%lf", sum);//1/1-1/2+1/3-1/4...-1/100的和

//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//int i = 0;
//int max = arr[0];//假设最大的数是下标为0的数，不能取0，万一数组里为负数
//int sz = sizeof(arr) / sizeof(arr[0]);//计算下标个数
//for (i = 0; i <= sz; i++)
//{
//	if (arr[i] > max)
//	{
//		max = arr[i];
//	}
//}
//printf("max=%d", max);//利用下标求10个数的最大值

	//int i = 0;
	//int j = 0;
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf(" %d*%d=%-2d", i, j, i * j);//%-2d左对齐空两个字符，不够的空格来补
	//	}
	//	printf("\n");
	//}//九九乘法表表

	//猜数字游戏
	//1.电脑生成一个随机数
	//2.猜数字
//#include <stdlib.h>
//#include <time.h>
//	void game()
//	{
//		int ret=0;//拿时间戳来设置随机数的生成起始点
//		//时间戳
//		int guess = 0;
//		ret = rand()%100+1;//生成随机数
//		while (1)
//		{
//			printf("请猜数字：");
//			scanf("%d", &guess);
//			if (guess > ret)
//			{
//				printf("猜大了\n");
//			}
//			else if (guess < ret)
//			{
//				printf("猜小了\n");
//			}
//			else
//			{
//				printf("猜对了\n");
//				break;
//			}
//		}
//	}
//	void menu()
//	{
//		printf("******************************\n");
//		printf("****   1.play    0.exit   ****\n");
//		printf("******************************\n");
//	}
//	int main()
//	{
//	int input=0;
//	srand((unsigned int)time(NULL));//生成一个随机数;
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//				break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("电脑即将关机，如果输入：我是猪，电脑取消关机\n请输入：");
//	scanf("%s",input);//数组不需要&
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;电脑关机小程序
//}