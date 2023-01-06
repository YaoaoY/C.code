#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test3()
//{
//	printf("呵呵");
//}
//void test2()
//{
//	test3();
//}
//void test1()
//{
//	test2();
//}
//int main()
//{
//	test1();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 13; i++)
//	{
//		arr[i] = 0;
//		printf("1\n");
//	}
//	return 0;
//}
// 模拟实现strcpy
//#include<assert.h>
//char* my_strcpy(char* des, const char* src)
//{
//	assert(des && src);
//	char* ret = des;//记录des的首地址，否则后面就被修改了
//	while (*src!='\0')
//	{
//		*des++ = *src++;
//	}
//	*des = '\0';
//	return ret;
//}
//int main()
//{
//	char arr[30] = { '\0'};
//	char* str = "abcdef";
//	my_strcpy(arr, str);
//	puts(my_strcpy(arr, str));
//	return 0;
//}

//模拟实现strlen
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)//我们只是来统计字符串的长度，不希望字符串的内容被修改，加上const保护
{
	int count = 0;
	assert(str!=NULL);
	while (*str != '\0')//循环不变量原则
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char* str = "abcde";
	int len = my_strlen(str);
	printf("%d", len);
	return 0;
}