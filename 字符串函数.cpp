#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//                 strlen

//strlen还可以用计数器的方法计算
//int my_strlen(char* arr)
//{
//int count = 0;
//while (*arr = !'\0')
//{
//	count++;
//	arr++;
//}return count;
//}

//int main()
//{
//	int len = strlen("abcdef");//等于6
//	char arr[] = { 'a','b','c' };//计算得到长度是随机值   找不到\0
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef")>0)//strlen 返回类型是size_t无符号数，补码相加减也是无符号数
//	{//如果用my_strlen计算，返回类型就是int
//
//		printf("hehe");//只会打印hehe
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}

//                  strcpy
#include <assert.h>
char* my_strcpy(char* dest,const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char * ret= dest;
	while (*dest++ = *src++)//从起始地址开始copy 到\0停止
	{
		;
	}return ret;//返回目的空间起始地址
}

int main()
{
	char arr1[] = "abcdef";
	//char *arr='abcd'常量字符串不可以复制
	char arr2[] = "bit";
	/*strcpy(arr1, arr2);*/// arr2里的\0会占据d的位置上
	my_strcpy(arr1, arr2);//用函数去copy
		printf("%s ",arr1);
	return 0;
}


//   strcat 追加字符

//char* my_strcat(char* dest, char* src)
//{
//	assert(dest != NULL);
//	//找到目的字符串‘0’
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//追加
//	while (*dest++ = *src)
//	{
//		;
//	}
//	return ret;//返回目的字符串的起始地址
//}

//int main()
//{
//	char arr1[30] = "hello";//[]括号里一定要加内存空间，否则会越界访问
//	char arr2[] = "bit";//会把\0也追加过去，从hello\0后开始追加
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//            strcmp
//#include <assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//两个指针不是空指针
//	//保证指针有效性 只要有一个空指针就会报错
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')//说明字符串相同，一直加到最后
//		{
//			return 0;//字符相同
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//		
//}
//
//int main()
//{
//	const char* p1 = "abcde";
//	const char* p2 = "sqwr";
//	int ret= my_strcmp(p1, p2);//模拟函数实现
//
//	/*int ret = strcmp(p1, p2);*///比较两个字符串第一个字符大小
//	//p1 > p2 返回值大于0
//
//	printf("%d", ret);
//	return 0;
//}


//           strncpy受字符长度限制的字符串复制

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[20] = "hello bit";
//	strncpy(arr1, arr2, 4);
//	printf("%s", arr1);//hell没有带\0 拷贝几个字节就是几个
//	return 0;
//}


//      1     strncat
//int main()
//{
//	char arr1[30] = "hello\0xxxxx";
//		char arr2[] = "world";
//	strncat(arr1, arr2, 3);  //会把一个\0自动追加上去
//	printf("%s", arr1);
//	return 0;
//}


//          strncmp 字符串比较

//int main()
//{
//	const char* p1 = "abcqfa";
//	const char* p2 = "abcqer";
//	int ret = strncmp(p1, p2,6);
//		printf("%d", ret);
//	return 0;
//}

//                    strstr  --查找字符串

//int main()
//{
//	const char* p1 = "abcdefghijk";
//	const char* p2 = "defg";
//	const char* ret=strstr(p1, p2);//返回的是d的地址之后字符串
//	printf("%s", ret);
//	return 0;
//}


//           strtok   ---  切割字符串

//int main()
//{
//	char arr[] = "wyx@baidu.tech";
//	const char* p = "@.";//分隔符
//    char buf[1024] = { 0 };
//	strcpy(buf, arr); // 会把@变成\0
//
//	char* ret = NULL;
//
//	for (ret=strtok(buf, p); ret != NULL; ret = strtok(NULL, p))//连续的字符串可以用for循环切割
//		//strtok（null，p)会从上一次切割地方开始切割
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}


//            strerror返回错误码

//int main()
//{
	//0  -----  No errro
	//1  -----  Operation not permitted 
	//....
	//char* str = strerror(1);

	//error 是一个全局错误码的变量
	//c语言执行库函数过程中，发生了错误，就会把对应的错误码，赋值到errno
	/*char* str = strerror(errno);
	printf("%s", str);*/

//	FILE* pf = fopen("test.c", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));//打开文件不成功的方式很多，errno可以把错误方式打印出来
//	}
//	else
//	{
//		printf("打开成功");
//	}
//	return 0;
//}

//       大写、小写字符转换 toupper  tolower
//#include <ctype.h>
//int main()
//{
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])//一个字符一个字符找，直到字符串\0停止
//	{
//		if (toupper(arr[i]))//判断字符串里是否是大写
//		{
//			arr[i]=tolower(arr[i]);//改为小写并赋值到arr
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}


//           memcpy    内存拷贝
//#include <ctype.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));//可以拷贝任意类型
//
//	return 0;
//}