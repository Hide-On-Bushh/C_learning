#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>	//ͷ�ļ�
//int main()
//{
	/*int age=20;
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age <= 28)
		printf("����\n");*/

//int age = 15;
//if (age < 18)
//{
		//	printf("δ����\n");
		//	printf("����̸����\n");//��ӡ�������Ҫ��{}
		//}
		//else if (age >= 18 && age <= 28)
		//	printf("����\n");

		///*int a = 0;
		//int b = 2;
		//if (a == 1)
		//	if (b == 2)
		//		printf("hehe\n");
		//	else
		//		printf("haha\n");elseֻ�����������ifƥ��

		/*int num = 4;
		//if (num = 5)
		{
			printf("hehe\n");��ֵ= �ж����Ҫ��==
		}*/

		/*int i=1;
		while(i<=100)
		{
		if (1 == i % 2)
		printf("%d\n",i);
		i++;
		}��ϰ��1��100�е�����*/

		/*int i = 1;
			while (i <= 100)
			{
				printf("%d ", i);
				i += 2;
			}ͬ��*/

			/*int day = 0;
			scanf("%d", &day);
			switch (day)
			{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				printf("������\n");
				break;
			case 6:
			case 7:
				printf("��Ϣ��\n");
				break;
			default:
				printf("�������\n");
				break;
			}switch���Ӧ��*/

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
				printf("m=%d,n=%d\n", m, n);switch��ϰ*/

				/*int i = 1;
				while (i <= 10)
				{
					printf("%d ", i);
					i++;0
				}��ӡ������1-10*/

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
				   //printf("��������ȷ����:>");
				   //scanf("%s\n", password);//�������룬������password������
				   ////���������س��󻺳���ʣ��'\n'
				   //while ((ch = getchar())!= '\n')
				   //{
				   //	;
				   //}
				   //printf("��ȷ�ϣ�Y/N��:>");
				   //ret = getchar();
				   //if (ret == 'Y')
				   //{
				   //	printf("ȷ�ϳɹ�\n");
				   //}
				   //if (ret == 'N');
				   //{
				   //	printf("ȷ��ʧ��\n");
				   //}

				  /*  int ch = 0;
				   while ((ch = getchar()) != EOF)
				   {
				   if (ch < '0' || ch>'9')
					   continue;
				   putchar(ch);
				   }��ӡ0����9�����֣������ӡ��ĸ*/

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
				   //}���Դ�ӡ100��hehe
				   //
				   //int i = 0;
				   //int j = 0;
				   //for (;i<10;i++)
				   //{
				   //	for (;j<10;j++)
				   //	{
				   //		printf("hehe\n");
				   //	}
				   //}ֻ�ܴ�ӡ10���Ǻ�

				   //int i = 0;
				   //int k = 0;
				   //for (i = 0, k = 0; k = 0; i++, k++)//k=0Ϊ�٣���ѭ����ѭ��0�Ρ��������Ϊ�������������ѭ����
				   //k++;

				   //int i = 0;
				   //int n=0;
				   //int ret = 1;
				   ////scanf("%d", &n);
				   //for (i=1;i<=n;i++)
				   //{
				   //	ret=ret*i;
				   //}
				   //printf("ret=%d\n", ret);//n�Ľ׳�

				   //int i = 0;
				   //int n = 0;
				   //int ret = 1;
				   //int sum = 0;
				   //for (n = 1; n <= 3; n++)
				   //{
				   //	ret = ret * n;
				   //	sum = sum + ret;
				   //}
				   //printf("sum=%d\n", sum);�׳����

				   //int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
				   //int k = 7
				   //
				   //int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
				   //int left = 0;//���±�
				   //int right = sz - 1;//���±�
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
				   //	printf("�ҵ��±���,�±��ǣ�%d\n",mid);
				   //	break;
				   //}�������������ö��ַ������ֲ��ҵ��±�

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
	//int right = strlen(arr1) - 1;//�����ַ�������-1
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);//��Ϣһ��
	//	Sleep(1000);
	//	system("cls");//ִ�������һ������--�����Ļ
	//	left++;
	//	right--;
 //   }
	//printf("%s\n", arr2);��Ļ����#���arr1

	//int i = 0;
	//char password[20];
	//for (i = 0; i < 3; i++)
	//{
	//	printf("����������");
	//	scanf("%s", password);
	//	if (strcmp(password, "123456") == 0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ����һ���⺯��-strcmp
	//	{
	//		printf("��½�ɹ�");
	//		break;
	//	}
	// else
	// {
	// printf��"�������\n"��;
	// }
	//}
	//if (3 == i)
	//	printf("���ε�½ʧ�ܣ����˳�\n");��¼ϵͳ��¼���δ���

 #include <stdio.h>

//int main()
//{
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d %d %d", &a, &b, &c);//�㷨ʵ��abc���������������ֵ���
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
	//printf("%d %d %d",a,b,c);�������������Ӵ�С����

//int i = 0;
//for(i=1;i<=100;i++)
//	if (i % 3 == 0)
//	{
//		printf("%d\n", i);
//	}���1--100������3����

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
//printf("count=%d ", count);//1--100��������9�ĸ���

//int i = 0;
//double sum = 0.0;
//int flag = 1;
//for (i = 1; i <=100; i++)
//{
//	sum+=flag*1.0/i;
//	flag = -flag;
//}
//printf("sum=%lf", sum);//1/1-1/2+1/3-1/4...-1/100�ĺ�

//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//int i = 0;
//int max = arr[0];//�������������±�Ϊ0����������ȡ0����һ������Ϊ����
//int sz = sizeof(arr) / sizeof(arr[0]);//�����±����
//for (i = 0; i <= sz; i++)
//{
//	if (arr[i] > max)
//	{
//		max = arr[i];
//	}
//}
//printf("max=%d", max);//�����±���10���������ֵ

	//int i = 0;
	//int j = 0;
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf(" %d*%d=%-2d", i, j, i * j);//%-2d�����������ַ��������Ŀո�����
	//	}
	//	printf("\n");
	//}//�žų˷����

	//��������Ϸ
	//1.��������һ�������
	//2.������
//#include <stdlib.h>
//#include <time.h>
//	void game()
//	{
//		int ret=0;//��ʱ����������������������ʼ��
//		//ʱ���
//		int guess = 0;
//		ret = rand()%100+1;//���������
//		while (1)
//		{
//			printf("������֣�");
//			scanf("%d", &guess);
//			if (guess > ret)
//			{
//				printf("�´���\n");
//			}
//			else if (guess < ret)
//			{
//				printf("��С��\n");
//			}
//			else
//			{
//				printf("�¶���\n");
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
//	srand((unsigned int)time(NULL));//����һ�������;
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//				break;
//		default:
//			printf("ѡ�����\n");
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
//	printf("���Լ����ػ���������룺����������ȡ���ػ�\n�����룺");
//	scanf("%s",input);//���鲻��Ҫ&
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;���Թػ�С����
//}