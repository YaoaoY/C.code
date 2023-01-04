#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[4] = { 1,3,5,7 };
	int i, * p;
	p = a;
	printf("%d,%d", *p, ++ * p);
	return 0;
}
//int main()
//{
//	int va[10], vb[10], * pa, * pb, i;
//	pa = va; pb = vb;
//	for (i = 0; i < 3; i++, pa++, pb++)
//	{
//		*pa = i; *pb = 2 * i;
//		printf("%d\t%d", *pa, *pb);
//	}
//	pa = &va[0]; pb = &vb[0];
//	for (i = 0; i < 3; i++)
//	{
//		*pa = *pa + i; *pb = *pb * i;
//		printf("%d\t%d\n", *pa++, *pb++);
//	}
//	return 0;
//}
