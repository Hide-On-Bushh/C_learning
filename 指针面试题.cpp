#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//第一题
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//数组的地址不能存入整型指针，所以强制类型转化
//	printf("%d,%d", *(a + 1), *(ptr - 1));//ptr-1向前挪动一个整型
//	return 0;
//}
//2 5

//第二题
//struct Test
//{
//	int Num;
//	char* pcname;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000，入下表达式为多少？
////已知结构体test类型变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//结构体指针加一跳过一个结构体20字节，0x00100014
//	printf("%p\n",(unsigned long) p + 0x1);//强制类型转换为整数 整数加1就是加1 0x001000001
//	printf("%p\n", (unsigned int*) p + 0x1);//100004无符号int型指针跳过一个无符号整型就是 0x00100004
//	return 0;
//}

//第三题

//int main()
//{
//	int a[4] = { 1,2,3,4 };//小端存储
//	//01 00 00 00   02 00 00 00  03 00 00 00  04 00 00 00
//	int* ptr1 = (int*)(&a + 1);//数组地址加一
//	int* ptr2 = (int*)((int)a + 1);//a地址转换成int加1，两个地址相差一个字节
//	//将a[0]的首地址强制转换为 int 型，再加1，即两个 int 型数据相加，其值为a[0]第二个字节的地址。
//	//即(int)a + 1 指向图中的地址1，由于*ptr2是int类型，所以*ptr2代表从a[0]的第二个字节到a[1]的第一个字节的数据
//	printf("%x,%x", ptr1[-1], *ptr2);//04 2000000
//	return 0;
//}

//第四题

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	//逗号表达式就是最后一个值，a[3][2]={1,3,5}
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//*(p+0)=p[0]
//	return 0;
//}

//第五题
//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//类型不同有警告，但p还是指向首元素地址，p[4]每次跳过四个int型元素
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//p[4][2]=*(*(p+4)+2)
//	// 
//	//%p形式打印-4打印的是补码，但地址是无符号数所以结果为 FF FF FF FC
//	return 0;
//}

//第六题

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* ptr1 = (int*)(&aa + 1);//整个数组指针加一，但最后转换为int*
//	int* ptr2 = (int*)(*(aa + 1));//相当于aa[1] 第二行首元素地址
//	printf(" %d, %d",*(ptr1-1),*(ptr2-1));
//return 0;
//}

//第七题

//int main()
//{
//	const char* a[] = { "work","at","alibab" };//字符指针数组存放字符常量首元素地址
//	const char**pa= a;//二级指针指向每个字符串首字母元素地址
//	pa++;//相当于跳过一个char*的指针
//	printf("%s\n", *pa);
//	return 0;
//}打印出 at

//第八题

//int main()
//{
//	const char* c[] = { "ENTER","NEW","POINT","FIRST" };//c数组存放了四个char*指针，四个指针分别指向四个字符串首元素地址
//	char** cp[] = {  c + 3,c + 2,c + 1,c };//cp数组存放四个char**元素指针 c相当于首元素地址
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//先++cpp（char***）指向c+2，第一个*解引用到cp内存c+2，在解引用c+2打印字符串point
//	printf("%s\n", *--*++cpp+3);//先++cpp指向c+1解引用,而后-- cp指向c中enter解引用，+3指针指向enter的三个字符后打印er
//	printf("%s\n", *cpp[-2]+3);//cpp[-2]=*(cpp-2)得到c+3的内容，c+3指向first在解引用+3指针向first后移三位打印st
//	printf("%s\n", cpp[-1][-1]+1);//*((*（cpp-1))-1)，指向new，再+1打印ew
//	//易错点:打印第三行的cpp[-2]指针位置只有++cpp--cpp才会移动，cpp-2没移动位置，到第四部还停留在第二步
//	return 0;
//}

//水仙花数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000000; i++)
//	{
//		//判断是否是水仙花数 （每一位数的三次幂之和等于数字本身）
//		//1.计算i的位数 - n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;//每次都需要计算和是多少所以需要在开头定义
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算i每一位的n次方之和
//		 tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.判断i是否等于sum
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}


//左旋k个字符串 
//如ABCD旋一个 变成BCDA
#include <string.h>

//暴力求解法
//void move_left(char* arr, int k)
//{
//	/*assert(arr != NULL);*///编程习惯 断言指针arr是有效值,不是空指针
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

//三步翻转法
//abcdef
// ba fedc分成两部分 左边 右边都逆序
//cd efab整体逆序
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
//	reverse(str,str+k-1);//逆序左边
//	reverse(str+k,str+len-1);//逆序右边
//	reverse(str,str+len-1);//整体逆序
//}
// 
//int main()
//{
//	char arr[] = { "abcde" };
//	move_left(arr, 2);
//	printf("%s", arr); 
//	return 0;
//}



//判断字符串是不是左旋转得来的方法
//#include <string.h>
//int if_move_left(char* str1,char* str2)
//{
//	int len1 = strlen(str1);
//	//1.给str1字符串追加一个子串 
//	//strcat   strcat(str1,str1)是错的，不能自己给自己后面追加本身字符串，因为后面没有\0
//	//strncat自己给自己追加
//	int len2 = strlen(str2);
//	if (len1 == len2)
//		return 0;//如果不比较字符串长度，arr2里存放cdef也会返回yes
//	strncat(str1, str1, len);
//	//2.判断字符串str2指向的字符串是不是str1子串
//	char* ret = strstr(str1, str2);//在str1的子串里找有没有str2
//	//找到之后返回的是地址，比如str2=cdefab返回c地址，没找到返回空指针
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


//杨氏矩阵
//从左到右递增，从上到下递增
// 从杨氏矩阵中查找某个数字
//时间复杂度小于O(N)有n个元素，不能一一去遍历他们

//int FindNum(int arr[3][3], int k, int *px, int *py)
//{
//	//从矩阵右上角或者左下角数字查找，不能用左上角和右下角数字查找
//	int x = 0;
//	int y = *py - 1;//锁定右上角元素
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;//如果右上角元素大于要找的数字k，说明肯定不在右上角数字所在的列
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;//右上角元素小于k，肯定不在右上角元素所在的行，因为右上角元素所在行它的值是最大的
//		}
//		else
//		{
//			*px = x;
//			*py = y;//找到的元素并把下标地址传回去
//			return 1;
//		}
//	}return 0;//跳出循环说明查找完了也没找到这个数字
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 3;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);//行列按地址传进去,
//	//返回型参数
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("元素下标为：%d %d", x, y);
//	}
//	else 
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}