#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test3()
//{
//	printf("�Ǻ�");
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
// ģ��ʵ��strcpy
//#include<assert.h>
//char* my_strcpy(char* des, const char* src)
//{
//	assert(des && src);
//	char* ret = des;//��¼des���׵�ַ���������ͱ��޸���
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

//ģ��ʵ��strlen
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)//����ֻ����ͳ���ַ����ĳ��ȣ���ϣ���ַ��������ݱ��޸ģ�����const����
{
	int count = 0;
	assert(str!=NULL);
	while (*str != '\0')//ѭ��������ԭ��
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