//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	//创建一个数组-存放整形-10个
//	//int arr[10] = {1,2,3};/*不完全初始化，剩下的元素都为0*/
//	//char arr2[5] = { 'a','b' };//剩下的元素为三个0
//	//char arr3[5] = "ab";//两个0和字符串结束标志\0
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//sizeof计算arr4所占空间大小，7个元素，包括\0
//	printf("%d\n", strlen(arr4));//strlen求字符串长度 [a b c d e f \0],只计算\0之前的字符
//	/*char ch[n];错误表达形式*/
//	return 0;
//}

//1.strlen和sizeof没有关联
//2.strlen是计算字符长度的，只能针对字符串---库函数，引头文件
//3.sizeof就算变量、数组、类型的大小，单位是字节---操作符

//练习
//int main()
//{
//	char arr1[] = "abc";//a b c \0
//	char arr2[] = { 'a','b','c' };//a b c
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//15为随机值,找不到\0，所以是随机值
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	printf("%c", arr[5]);//打印字母f，[]放字符下标
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);//打印所有字符
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i <= len; i++)
//	{
//		printf("&arr[%d]=%p\n", i,&arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3}, {4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		//	printf("%d ", arr[i][j]);//二维数组的使用
//		//printf("\n");
//		printf("arr[%d][%d]=%p\n", i, j, &arr[i][j]);//打印二维数组地址
//	}
//	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };//行可以省略，但是列是不可以省略
//	return 0;
//}

//冒泡排序

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//确定冒泡排序总次数
//	{
//		int flag = 1;//假设要排的序列已经有序
//		int j = 0;//每一趟冒泡排序内容
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])//第一个元素和第二个元素进行比较而后换位
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//只要有一趟比较中又不完全序列flag值就会变，否则不会进入if循环一直是1，只要有一组需要交换位置就会进入if循环，flag值就会变成0
//			}
//			if (1 == flag)
//			{
//				break;//break只能用于Switch和for循环,flag不变说明上一个if比较的是arr[i]<arr[i+1]所以不进入循环
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	//对arr进行冒泡排序；排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr是数组，数组传参，实际上传递过去的是arr首元素地址 &arr[0]
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//    return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//printf("%p\n", arr);//打印首元素地址
//	//printf("%p\n", &arr[0]);//数组名是首元素地址
//	//printf("%d", *arr);//解引用
//	//int sizeof(arr)数组名是整个数组，计算数组大小，单位字节
//	//&数组名，数组名代表整个数组，取出数组的地址
//	printf("%p\n", &arr);//这是整个数组地址，不是首元素地址
//	return 0;
//}

//#include "game.h"
//
//void menu()
//{
//	printf("***************************\n");
//	printf("****** 1.play  2.exit *****\n");
//	printf("***************************\n");
//}
////游戏的算法实现
//void game()
//{
//	char ret = 0;
//	//数组存放走出的棋盘信息
//	char board[ROW][COL] = { 0 };//全部是空格
//	//初始化棋盘
//	InitBoard(board, ROW, COL);
//	//打印棋盘
//	DisplayBoard(board,ROW,COL);
//	while (1)
//	{
//		//玩家下棋
//		playMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//判断玩家是否赢
//		ret = isWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//电脑下棋
//		computerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//判断电脑是否赢
//		ret = isWin(board,ROW,COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("玩家赢\n");
//	}
//	else if (ret == '#')
//	{
//		printf("电脑赢\n");
//	}
//	else
//	{
//		printf("平局\n");
//	}
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   
//---|---|---


//数组练习

//#include <stdio.h>
//int  main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };//逗号表达式，括号里整个式子计算结果只是逗号最后一个式子的值，（3,4）结果是4，所以整个数组就只有四个元素
//	printf("%d", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%d %d", sizeof(arr), strlen(arr));//hello bit\0算上空格\0总共十个字符，str只计算到\0之前，不计算\0的长度
//	return 0;
//}

//#include <stdio.h>
//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void Reverse(int arr[], int sz)//逆序运用冒泡排序法
//{
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		for (i = 0; i < sz - 1-j; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				int tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);//把数组初始化为0
//	Print(arr, sz);//打印函数
//	Reverse(arr, sz);
//	Print(arr, sz);
//		return 0;
//}