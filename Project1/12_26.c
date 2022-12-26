#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h> 
//#include<malloc.h>
//typedef struct node {
//    int pos;//编号
//    struct node* next;
//} LINK;
////创建圆圈，返回链表的头指针
//LINK* CreateList(int n)
//{
//    LINK* head = NULL;
//    LINK* p = NULL, * q = NULL;
//    for (int i = 1; i <= n; i++)
//    {
//        p = (LINK*)malloc(sizeof(LINK));
//        p->pos = i;
//        if (i == 1)
//        {
//            head = p;
//        }
//        else
//        {
//            q->next = p;
//        }
//        q = p;
//    }
//    p->next = head;
//    return head;
//}
//// 删除第x个结点
//void DeleteList(LINK* head, int x)
//{
//
//    LINK* p = head, * q = head;
//    for (int i = 1; i <= x - 1; i++)
//    {
//        q = p;
//        p = p->next;
//    }
//    q->next = p->next;
//
//}
//
//int main()
//{
//    int n = 0, m = 0;
//    scanf_s("%d %d", &n, &m);
//    LINK* head = CreateList(n);//创建循环链表
//    LINK* p = head;
//    while (p != p->next)//当只剩一个节点时跳出循环
//    {
//        DeleteList(p, m);//void void DeleteList(LINK* head, int x)
//        //删除以p为头节点的第x个节点
//        for (int i = 0; i < m - 1; i++)
//        {
//            p = p->next;
//        }
//    }
//    printf("%d", p->pos);
//
//    return 0;
//}
//#include <stdio.h>
//#include<string.h>
//#include<malloc.h>
//typedef struct Person
//{
//    char name[20];//候选人姓名
//    int count;//得票数
//}P;
//
//void search_count(P* head, char str[20], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        if (strcmp(((head + i)->name), str) == 0)
//        {
//            (head + i)->count++;
//            break;
//        }
//    }
//}
//P* search_max(P* head, int n)
//{
//    int max = 0;
//    P* p = head, * ans = NULL;
//    for (int i = 0; i < n; i++)
//    {
//        if ((head + i)->count > max)
//        {
//            max = (head + i)->count;
//            ans = head + i;
//        }
//    }
//    return ans;
//}
//int main()
//{
//    int n = 0, m = 0;
//    char str[20] = { 0 };
//    scanf("%d %d", &n, &m);
//    P* head = (P*)malloc(sizeof(P) * n);
//
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%s", (head + i)->name);//填充节点
//        (head + i)->count = 0;
//    }
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%s", str);
//        search_count(head, str, n);
//    }
//    P* p_max = search_max(head, n);
//    printf("%s:%d", p_max->name, p_max->count);
//
//    return(0);
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//struct ListNode
//{
//    int num;
//    struct ListNode* next;
//};
//struct ListNode* Create(int n)
//{
//    if (n == 0)
//    {
//        return NULL;
//    }
//    struct ListNode* head = NULL, * q = NULL, * p = NULL;
//    for (int i = 1; i <= n; i++)
//    {
//        p = (struct ListNode*)malloc(sizeof(struct ListNode));
//        scanf("%d", &p->num);
//        if (i == 1)
//        {
//            head = p;
//        }
//        else
//        {
//            q->next = p;
//        }
//        q = p;
//    }
//    p->next = NULL;
//    return head;
//}
//int isPalindrome(struct ListNode* head)
//{
//    if (head == NULL)
//    {
//        return 1;
//    }
//    int arr[50] = { 0 };
//    struct ListNode* p = head;
//    int i = 0;
//    while (p != NULL)
//    {
//        arr[i++] = p->num;
//        p = p->next;
//    }
//    int left = 0;
//    int right = i - 1;
//    while (left <= right)
//    {
//        if (arr[left++] != arr[right--])
//        {
//            return 0;
//        }
//    }
//    return 1;
//
//
//}
//int main()
//{
//
//    int n = 0;
//    scanf("%d", &n);
//    struct ListNode  * head = Create(n);
//    struct ListNode* head = Create(n);
//    int ret = isPalindrome(head);
//    ret == 1 ? printf("true") : printf("false");
//
//    return(0);
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
////读入n个整数，构成链表
//struct ListNode
//{
//    int num;
//    struct ListNode* next;
//};
//struct ListNode* CreatLink(int n)
//{
//    struct ListNode* head = NULL, * q = NULL, * p = NULL;
//    for (int i = 1; i <= n; i++)
//    {
//        p = (struct ListNode*)malloc(sizeof(struct ListNode));
//        scanf("%d", &p->num);
//        if (i == 1)
//        {
//            head = p;
//        }
//        else
//        {
//            q->next = p;
//        }
//        q = p;
//    }
//    p->next = NULL;
//    return head;
//}
////输出链表
//void PrintLink(struct ListNode* head)
//{
//    struct ListNode* p = head;
//    while (p != NULL)
//    {
//        printf("%d ", p->num);
//        p = p->next;
//    }
//}
////将链表逆序反转
//struct ListNode* reverseList(struct ListNode* head)
//{
//    struct ListNode* pre = NULL, * cur = head, * temp = cur;;
//    while (cur != NULL)
//    {
//        temp = cur->next;
//        cur->next = pre;
//        pre = cur;
//        cur = temp;
//    }
//    return pre;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    struct ListNode* head = CreatLink(n);
//    head = reverseList(head);
//    PrintLink(head);
//
//    return(0);
//}
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
	if (n == 0)
	{
		return NULL;
	}
	struct ListNode* head = NULL, * q = NULL, * p = NULL;
	for (int i = 1; i <= n; i++)
	{
		p = (struct ListNode*)malloc(sizeof(struct ListNode));
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
	if (head == NULL)
	{
		return 1;
	}
	int arr[50] = { 0 };
	struct ListNode* p = head;
	int i = 0;
	while (p != NULL)
	{
		arr[i++] = p->num;
		p = p->next;
	}
	int left = 0;
	int right = i - 1;
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
	// ruct ListNode  * head = Create(n);
	struct ListNode* head = Create(n);
	int ret = isPalindrome(head);
	ret == 1 ? printf("true") : printf("false");

	return(0);
}
