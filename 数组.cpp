//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	//����һ������-�������-10��
//	//int arr[10] = {1,2,3};/*����ȫ��ʼ����ʣ�µ�Ԫ�ض�Ϊ0*/
//	//char arr2[5] = { 'a','b' };//ʣ�µ�Ԫ��Ϊ����0
//	//char arr3[5] = "ab";//����0���ַ���������־\0
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//sizeof����arr4��ռ�ռ��С��7��Ԫ�أ�����\0
//	printf("%d\n", strlen(arr4));//strlen���ַ������� [a b c d e f \0],ֻ����\0֮ǰ���ַ�
//	/*char ch[n];��������ʽ*/
//	return 0;
//}

//1.strlen��sizeofû�й���
//2.strlen�Ǽ����ַ����ȵģ�ֻ������ַ���---�⺯������ͷ�ļ�
//3.sizeof������������顢���͵Ĵ�С����λ���ֽ�---������

//��ϰ
//int main()
//{
//	char arr1[] = "abc";//a b c \0
//	char arr2[] = { 'a','b','c' };//a b c
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//15Ϊ���ֵ,�Ҳ���\0�����������ֵ
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	printf("%c", arr[5]);//��ӡ��ĸf��[]���ַ��±�
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);//��ӡ�����ַ�
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
//		//	printf("%d ", arr[i][j]);//��ά�����ʹ��
//		//printf("\n");
//		printf("arr[%d][%d]=%p\n", i, j, &arr[i][j]);//��ӡ��ά�����ַ
//	}
//	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };//�п���ʡ�ԣ��������ǲ�����ʡ��
//	return 0;
//}

//ð������

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//ȷ��ð�������ܴ���
//	{
//		int flag = 1;//����Ҫ�ŵ������Ѿ�����
//		int j = 0;//ÿһ��ð����������
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])//��һ��Ԫ�غ͵ڶ���Ԫ�ؽ��бȽ϶���λ
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//ֻҪ��һ�˱Ƚ����ֲ���ȫ����flagֵ�ͻ�䣬���򲻻����ifѭ��һֱ��1��ֻҪ��һ����Ҫ����λ�þͻ����ifѭ����flagֵ�ͻ���0
//			}
//			if (1 == flag)
//			{
//				break;//breakֻ������Switch��forѭ��,flag����˵����һ��if�Ƚϵ���arr[i]<arr[i+1]���Բ�����ѭ��
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	//��arr����ð�������ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr�����飬���鴫�Σ�ʵ���ϴ��ݹ�ȥ����arr��Ԫ�ص�ַ &arr[0]
//	bubble_sort(arr,sz);//ð��������
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
//	//printf("%p\n", arr);//��ӡ��Ԫ�ص�ַ
//	//printf("%p\n", &arr[0]);//����������Ԫ�ص�ַ
//	//printf("%d", *arr);//������
//	//int sizeof(arr)���������������飬���������С����λ�ֽ�
//	//&�������������������������飬ȡ������ĵ�ַ
//	printf("%p\n", &arr);//�������������ַ��������Ԫ�ص�ַ
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
////��Ϸ���㷨ʵ��
//void game()
//{
//	char ret = 0;
//	//�������߳���������Ϣ
//	char board[ROW][COL] = { 0 };//ȫ���ǿո�
//	//��ʼ������
//	InitBoard(board, ROW, COL);
//	//��ӡ����
//	DisplayBoard(board,ROW,COL);
//	while (1)
//	{
//		//�������
//		playMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//�ж�����Ƿ�Ӯ
//		ret = isWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//��������
//		computerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//�жϵ����Ƿ�Ӯ
//		ret = isWin(board,ROW,COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("���Ӯ\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����Ӯ\n");
//	}
//	else
//	{
//		printf("ƽ��\n");
//	}
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
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


//������ϰ

//#include <stdio.h>
//int  main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };//���ű��ʽ������������ʽ�Ӽ�����ֻ�Ƕ������һ��ʽ�ӵ�ֵ����3,4�������4���������������ֻ���ĸ�Ԫ��
//	printf("%d", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%d %d", sizeof(arr), strlen(arr));//hello bit\0���Ͽո�\0�ܹ�ʮ���ַ���strֻ���㵽\0֮ǰ��������\0�ĳ���
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
//void Reverse(int arr[], int sz)//��������ð������
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
//	//Init(arr,sz);//�������ʼ��Ϊ0
//	Print(arr, sz);//��ӡ����
//	Reverse(arr, sz);
//	Print(arr, sz);
//		return 0;
//}