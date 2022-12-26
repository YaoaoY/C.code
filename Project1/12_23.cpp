#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct ListNode
{
	int num;
	struct ListNode* next;
};
struct ListNode* Create(int n)
{
	struct ListNode* head = NULL, * q = NULL, * p = NULL;
	for(int i=1;i<=n;i++)
	{
		p = (struct ListNode *)malloc(sizeof(struct ListNode));
		scanf("%d", &p->num);
		if (i == 1)
		{
			head = p;
		}
		else
		{
			q->next = p;
		}
		q = p;
	}
	p->next = NULL;
	return head;
}
int isPalindrome(struct ListNode* head)
{
	int arr[50] = { 0 };
	struct ListNode* p = head;
	int i = 0;
	while (p != NULL)
	{
		arr[i++] = p->num;
		p = p->next;
	}
	int left = 0;
	int right = i-1;
	while (left <= right)
	{
		if (arr[left++] != arr[right--])
		{
			return 0;
		}
	}
	return 1;


}
int main()
{
	
	int n = 0;
	scanf("%d", &n);
	//struct ListNode * head = Create(n);
	struct ListNode* head = Create(n);
	int ret = isPalindrome(head);
	ret == 1 ? printf("true") : printf("false");

	return(0);
}