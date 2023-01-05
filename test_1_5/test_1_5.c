#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void adjust(int arr[], int len)
//{
//	int i = 0, j = len - 1;//设置双指针:i,j
//	while (i < j)
//	{
//		while ((i < len) && (arr[i] % 2 == 1))//如果是奇数则i继续往前遍历(注意i不能越界！)
//		{
//			i++;//i继续向后遍历
//		}
//		//i跳出的时候，说明此时i找到了偶数
//
//		while ((j >= 0) && (arr[j] % 2 == 0))
//		{
//			j--;
//		}
//		//j跳出，说明j找到了奇数
//
//		if (i < j)//还是要判断一下，只有i<j的时候才进行交换
//		{
//			int temp = 0;
//			temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//		//交换完之后，i和j才“放心”，继续向前走一个
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,4,5,6,2,7,8,10,3,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	adjust(arr,len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
int main()
{
	int arr[10] = { 1,3,4,5,6,2,7,9,10,8 };
	int flag = 0;//如果非升序，则标记为1
	for (int i = 1; i < 10; i++)
	{
		if (arr[i - 1] > arr[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("升序");
	}
	return 0;
}