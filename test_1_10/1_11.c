#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*int b = -10;
	printf("%d", b);*/
	//写一个程序来判断当前机器是大端存储还是小端存储
	//int a = 1;//0x00 00 00 01
	//char* p = (char*)(&a);
	//if ((*p) == 1) {
	//	printf("小端");
	//}
	//else {
	//	printf("大端");
	//}
	char a = 128;
	printf("%d", a);

	return 0;
}