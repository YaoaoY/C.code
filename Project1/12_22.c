#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}NODE;
struct node* create_linklist(int n)//创建n个结点的链表，返回表头
{
    NODE *head = NULL, * q = NULL, * p = NULL;
    for (int i = 0; i < n; i++)
    {
        p = (NODE*)malloc(sizeof(NODE));
        scanf("%d", &p->data);
        if (i == 0)
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

struct node* insert_node(struct node* head, int pos, int data)//在以head为头的链表中第post的位置插入数据data，返回表头
{
    NODE* p = head, * q = head;
    NODE* new_node = (NODE*)malloc(sizeof(NODE));
    new_node->data = data;
    for (int i = 1; i <= pos; i++)
    {
        q = p;
        p = p->next;
    }
    if (p == NULL)
    {
        p->next = new_node;
        new_node->next = NULL;
    }
    else
    {
        q->next = new_node;
        new_node->next = p;
    }
    return head;
}
struct node* delete_node(struct node* head, int pos)//在以head为头的链表中删除第post的位置的结点，返回表头
{
    NODE* q = head, * p = head;
    if (pos == 1)
        return head->next;
    for (int i = 2; i <= pos; i++)
    {
        q = p;
        p = p->next;
    }
    if (p == NULL)
    {
        q->next = NULL;
    }
    else
    {
        q->next = p->next;
        free(p);
    }
    return head;
}
void print_linklist(struct node* head)//输出以head为头的链表的所有结点数据
{
    NODE* p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    int num_node = 0, num_oprt = 0;
    scanf("%d %d", &num_node, &num_oprt);
    NODE* head = create_linklist(num_node);//创建链表
    for (int i = 0; i < num_oprt; i++)
    {
        int way_oprt = 0;
        scanf("%d", &way_oprt);
        switch (way_oprt)
        {
        case 1:
        {
            int pos = 0;
            int data = 0;
            scanf("%d %d", &pos, &data);
            if (pos > num_node) {
                break;
            }
            else {
                head = insert_node(head, pos, data);
            }
            break;
        }
        case 2:
        {
            int pos = 0;
            scanf("%d", &pos);
            if (pos > num_node)
            {
                break;
            }
            else
            {
                delete_node(head, pos);
            }
            break;
        }
        }

        
    }
    print_linklist(head);

    return 0;
}