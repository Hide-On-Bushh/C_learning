#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//                 strlen

//strlen�������ü������ķ�������
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
//	int len = strlen("abcdef");//����6
//	char arr[] = { 'a','b','c' };//����õ����������ֵ   �Ҳ���\0
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef")>0)//strlen ����������size_t�޷�������������Ӽ�Ҳ���޷�����
//	{//�����my_strlen���㣬�������;���int
//
//		printf("hehe");//ֻ���ӡhehe
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
	while (*dest++ = *src++)//����ʼ��ַ��ʼcopy ��\0ֹͣ
	{
		;
	}return ret;//����Ŀ�Ŀռ���ʼ��ַ
}

int main()
{
	char arr1[] = "abcdef";
	//char *arr='abcd'�����ַ��������Ը���
	char arr2[] = "bit";
	/*strcpy(arr1, arr2);*/// arr2���\0��ռ��d��λ����
	my_strcpy(arr1, arr2);//�ú���ȥcopy
		printf("%s ",arr1);
	return 0;
}


//   strcat ׷���ַ�

//char* my_strcat(char* dest, char* src)
//{
//	assert(dest != NULL);
//	//�ҵ�Ŀ���ַ�����0��
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//׷��
//	while (*dest++ = *src)
//	{
//		;
//	}
//	return ret;//����Ŀ���ַ�������ʼ��ַ
//}

//int main()
//{
//	char arr1[30] = "hello";//[]������һ��Ҫ���ڴ�ռ䣬�����Խ�����
//	char arr2[] = "bit";//���\0Ҳ׷�ӹ�ȥ����hello\0��ʼ׷��
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//            strcmp
//#include <assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//����ָ�벻�ǿ�ָ��
//	//��ָ֤����Ч�� ֻҪ��һ����ָ��ͻᱨ��
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')//˵���ַ�����ͬ��һֱ�ӵ����
//		{
//			return 0;//�ַ���ͬ
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
//	int ret= my_strcmp(p1, p2);//ģ�⺯��ʵ��
//
//	/*int ret = strcmp(p1, p2);*///�Ƚ������ַ�����һ���ַ���С
//	//p1 > p2 ����ֵ����0
//
//	printf("%d", ret);
//	return 0;
//}


//           strncpy���ַ��������Ƶ��ַ�������

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[20] = "hello bit";
//	strncpy(arr1, arr2, 4);
//	printf("%s", arr1);//hellû�д�\0 ���������ֽھ��Ǽ���
//	return 0;
//}


//      1     strncat
//int main()
//{
//	char arr1[30] = "hello\0xxxxx";
//		char arr2[] = "world";
//	strncat(arr1, arr2, 3);  //���һ��\0�Զ�׷����ȥ
//	printf("%s", arr1);
//	return 0;
//}


//          strncmp �ַ����Ƚ�

//int main()
//{
//	const char* p1 = "abcqfa";
//	const char* p2 = "abcqer";
//	int ret = strncmp(p1, p2,6);
//		printf("%d", ret);
//	return 0;
//}

//                    strstr  --�����ַ���

//int main()
//{
//	const char* p1 = "abcdefghijk";
//	const char* p2 = "defg";
//	const char* ret=strstr(p1, p2);//���ص���d�ĵ�ַ֮���ַ���
//	printf("%s", ret);
//	return 0;
//}


//           strtok   ---  �и��ַ���

//int main()
//{
//	char arr[] = "wyx@baidu.tech";
//	const char* p = "@.";//�ָ���
//    char buf[1024] = { 0 };
//	strcpy(buf, arr); // ���@���\0
//
//	char* ret = NULL;
//
//	for (ret=strtok(buf, p); ret != NULL; ret = strtok(NULL, p))//�������ַ���������forѭ���и�
//		//strtok��null��p)�����һ���и�ط���ʼ�и�
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}


//            strerror���ش�����

//int main()
//{
	//0  -----  No errro
	//1  -----  Operation not permitted 
	//....
	//char* str = strerror(1);

	//error ��һ��ȫ�ִ�����ı���
	//c����ִ�п⺯�������У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno
	/*char* str = strerror(errno);
	printf("%s", str);*/

//	FILE* pf = fopen("test.c", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));//���ļ����ɹ��ķ�ʽ�ܶ࣬errno���԰Ѵ���ʽ��ӡ����
//	}
//	else
//	{
//		printf("�򿪳ɹ�");
//	}
//	return 0;
//}

//       ��д��Сд�ַ�ת�� toupper  tolower
//#include <ctype.h>
//int main()
//{
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])//һ���ַ�һ���ַ��ң�ֱ���ַ���\0ֹͣ
//	{
//		if (toupper(arr[i]))//�ж��ַ������Ƿ��Ǵ�д
//		{
//			arr[i]=tolower(arr[i]);//��ΪСд����ֵ��arr
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}


//           memcpy    �ڴ濽��
//#include <ctype.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));//���Կ�����������
//
//	return 0;
//}