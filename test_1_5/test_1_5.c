#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void adjust(int arr[], int len)
//{
//	int i = 0, j = len - 1;//����˫ָ��:i,j
//	while (i < j)
//	{
//		while ((i < len) && (arr[i] % 2 == 1))//�����������i������ǰ����(ע��i����Խ�磡)
//		{
//			i++;//i����������
//		}
//		//i������ʱ��˵����ʱi�ҵ���ż��
//
//		while ((j >= 0) && (arr[j] % 2 == 0))
//		{
//			j--;
//		}
//		//j������˵��j�ҵ�������
//
//		if (i < j)//����Ҫ�ж�һ�£�ֻ��i<j��ʱ��Ž��н���
//		{
//			int temp = 0;
//			temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//		//������֮��i��j�š����ġ���������ǰ��һ��
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
	int flag = 0;//�������������Ϊ1
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
		printf("����");
	}
	return 0;
}