#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int len = 0,num = 0;
//    scanf("%d %d", &len, &num);
//    int arr[1000] = { 0 };
//    for (int i = 0; i < num; i++)
//    {
//        int left = 0,right = 0;
//        scanf("%d %d", &left, &right);
//        for (int j = left; j <= right; j++)
//        {
//            arr[j] = 1;//如果树被移走，则标记为1;
//        }
//    }
//    int count = 0;//count计算被移走的树数量
//    for (int i = 0; i <= len; i++)
//    {
//        if (arr[i] == 1)
//        {
//            count++;
//        }
//    }
//    int sum = len + 1 - count;//sum为剩下的树的数量
//    printf("%d", sum);
//
//    return 0;
//}
#include <stdio.h>
#include<string.h>
#include<math.h>
struct stu {
    int yuwen;//语文成绩
    int shuxue;//数学成绩
    int yingyu;//英语成绩
    int zf;//总分
    char s[20];//姓名
};
void swap(struct stu* p1, struct stu* p2)//交换。用于排序时将两个数组元素进行交换
{
    int temp = 0;
    temp = p1->yuwen;
    p1->yuwen = p2->yuwen;
    p2->yuwen = temp;

    temp = p1->shuxue;
    p1->shuxue = p2->shuxue;
    p2->shuxue = temp;

    temp = p1->yingyu;
    p1->yingyu = p2->yingyu;
    p2->yingyu = temp;

    char str[20] = { 0 };
    strcpy(str, p1->s);
    strcpy(p1->s,p2->s);
    strcpy(p2->s,str);

}
void sort(struct stu arr[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (strcmp(arr[j].s, arr[j + 1].s) > 0)
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main()
{
    struct stu arr[100];
    int num = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%s %d %d %d", arr[i].s, &arr[i].yuwen, &arr[i].shuxue, &arr[i].yingyu);
        arr[i].zf = arr[i].yuwen + arr[i].shuxue + arr[i].yuwen;
    }
    sort(arr, num);
   
    
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            int a = fabs(arr[i].yuwen - arr[j].yuwen) <= 5;
            int b =fabs(arr[i].yingyu - arr[j].yingyu) <= 5;
            int c = fabs(arr[i].shuxue - arr[j].shuxue) <= 5;
            int d = abs(arr[i].zf - arr[j].zf) <= 10;
            if (a && b && c && d)//4个条件满足
                {
                    printf("%s %s\n", arr[i].s, arr[j].s);
                }
        }
    }

   

    return 0;
}
//#include <stdio.h>
//#include<math.h>
//double dis(double x1, double y1, double x2, double y2)//求两点间距离
//{
//    double ans = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//    return ans;
//}
//double area(double x1, double y1, double x2, double y2, double x3, double y3)//求三角形面积
//{
//    double len1 = dis(x1, y1, x2, y2);
//    double len2 = dis(x2, y2, x3, y3);
//    double len3 = dis(x3, y3, x1, y1);
//
//    double p = (len1 + len2 + len3) / 2;
//    double s = sqrt(p * (p - len1) * (p - len2) * (p - len3));
//    return s;
//}
//int main()
//{
//    double x[4] = { 0 };
//    double y[4] = { 0 };
//    double len[4] = { 0 };
//    for (int i = 1; i <= 3; i++)
//    {
//        scanf("%lf %lf", &x[i], &y[i]);
//    }
//    len[1] = dis(x[1], y[1], x[2], y[2]);
//    len[2] = dis(x[2], y[2], x[3], y[3]);
//    len[3] = dis(x[3], y[3], x[1], y[1]);
//    int a = (len[1] + len[2]) > len[3];//a、b、c为三角形存在的三个条件
//    int b = (len[3] + len[2]) > len[1];
//    int c = (len[1] + len[3]) > len[2];
//    if (a && b && c)//3个条件成立
//    {
//        double s = area(x[1], y[1], x[2], y[2], x[3], y[3]);
//        printf("%.2lf", s);
//    }
//    else
//    {
//        printf("-1");
//    }
//    return 0;
//}