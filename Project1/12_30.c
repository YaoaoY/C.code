#define _CRT_SECURE_NO_WARNINGS 1
//9.3.2
//#include <stdio.h>
//#include <string.h>
//#include<stdlib.h>
//#define N 100
////�˺��������������ԣ�����ɾ�����Լ��ύ�Ĵ���ҲҪ����������
//void BeforeTest()
//{
//    int i;
//    char str[2][N];
//    char fileName[2][20] = { "a1.txt","a2.txt" };
//    FILE* fp;
//    for (i = 0; i < 2; i++)
//    {
//        fp = fopen(fileName[i], "w");
//        fgets(str[i], N, stdin);
//        str[i][strlen(str[i]) - 1] = '\0';
//        fwrite(str[i], strlen(str[i]), 1, fp);
//        fclose(fp);
//    }
//}
////�˺��������������ԣ�����ɾ�����Լ��ύ�Ĵ���ҲҪ����������
//void AfterTest()
//{
//    char x;
//    FILE* fp;
//    fp = fopen("a3.txt", "r");
//    while ((x = fgetc(fp)) != EOF)
//        printf("%c", x);
//    fclose(fp);
//}
//int main()
//{
//    BeforeTest();//�û����ԣ�����ɾ��
//    //�ڴ˴�д�Լ��Ĵ���
//    char str[3][N];
//    char fileName[3][20] = { "a1.txt","a2.txt","a3.txt" };
//    for (int i = 0; i < 2; i++)
//    {
//        FILE* fp = fopen(fileName[i], "r");
//        fgets(str[i], N, fp);
//        fclose(fp);
//    }
//    if (strcmp(str[0], str[1]) > 0)
//    {
//        strcpy(str[2], str[0]);
//        strcpy(str[0], str[1]);
//        strcpy(str[1], str[2]);
//    }
//    FILE* fp = fopen(fileName[2], "w+");
//    for (int i = 0; i < 2; i++)
//    {
//        fputs(str[i], fp);
//        fputc('\n', fp);
//    }
//    rewind(fp);
//    fclose(fp);
//    AfterTest();//�û����ԣ�����ɾ��
//    return 0;
//}

//9.3.3
/*
����Ŀ������
�Ӽ�������n(n<=50)��ѧ������Ϣ������Ϊ�ṹ�壩��������������ѧ��Ӣ��������ſγ̳ɼ����������ܷ��ɸߵ��ͽ������򣬽��ź����ѧ�����ݴ�ŵ��ļ���sort.txt���ļ��С�
������˵����
�����һ����һ�����֣���ʾѧ����n����������n�����ݣ�ÿһ�б�ʾһ��ѧ�������ݡ�
������������
3
���� 80 90 95
���� 76 89.5 89
���� 100 66.5 98.5
�����������
������80.0 90.0 95.0
���壺100.0 66.5 98.5
���ģ�76.0 89.5 89.0
*/
//#include <stdio.h>
//#include <string.h>
//#define N 50
//typedef struct student
//{
//    char name[20];
//    float score[3];
//}Stu;
//
////�˺��������������ԣ�����ɾ�����Լ��ύ�Ĵ���ҲҪ����������
//void AfterTest()
//{
//    FILE* fp;
//    fp = fopen("sort.txt", "r");
//    Stu s;
//    while (fread(&s, sizeof(Stu), 1, fp) != 0)
//    {
//        printf("%s��%.1f %.1f %.1f\n", s.name, s.score[0], s.score[1], s.score[2]);
//    }
//    fclose(fp);
//}
//int main()
//{
//    FILE* fp = fopen("sort.txt", "w");
//    Stu s[N], t;
//    int n, i, j;
//    float sum[N] = { 0 }, ts = 0;
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++)
//    {
//        getchar();
//        scanf("%s", s[i].name);
//        sum[i] = 0;
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%f", &s[i].score[j]);
//            sum[i] += s[i].score[j];
//        }
//    }
//    for (i = 0; i < n - 1; i++)
//        for (j = 0; j < n - i - 1; j++)
//            if (sum[j] < sum[j + 1])
//            {
//                t = s[j];
//                s[j] = s[j + 1];
//                s[j + 1] = t;
//                ts = sum[j];
//                sum[j] = sum[j + 1];
//                sum[j + 1] = ts;
//            }
//    for (i = 0; i < n; i++)
//        fwrite(&s[i], sizeof(Stu), 1, fp);
//    fclose(fp);
//    AfterTest();//�û����ԣ�����ɾ��
//    return 0;
//}
//


//9.3.1
//#include <stdio.h>
//#include <string.h>
//#include<stdlib.h>
////�˺��������������ԣ�����ɾ�����Լ��ύ�Ĵ���ҲҪ����������
//#define N 101
//void AfterTest()
//{
//    char x;
//    FILE* fp;
//    fp = fopen("a1.txt", "r");
//    while ((x = fgetc(fp)) != EOF)
//        printf("%c", x);
//    fclose(fp);
//}
//int main()
//{
//    //�ڴ˴�д�Լ��Ĵ���
//    char str[N] = { 0 };
//    fgets(str, N, stdin);
//    str[strlen(str) - 1] = '\0';
//    for (int i = 0; i < strlen(str); i++)
//    {
//        if (str[i] >= 'a' && str[i] <= 'z')
//        {
//            str[i] -= 'a' - 'A';
//        }
//    }
//    FILE* fp = fopen("a1.txt", "w");
//    fputs(str, fp);
//    rewind(fp);
//
//    AfterTest();//�û����ԣ�����ɾ��
//    return 0;
//}
//
//


//9.3.4
//#include <stdio.h>
//#include <string.h>
//#include<math.h>
//#define N 50
//typedef struct person
//{
//    int id;
//    char name[20];
//    char department;
//    float salary;
//}Person;
////�˺��������������ԣ�����ɾ�����Լ��ύ�Ĵ���ҲҪ����������
//static int n;
//void BeforeTest()
//{
//    int i;
//
//    Person p[N];
//    FILE* fp;
//    fp = fopen("info.txt", "w");
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d %s %c %f", &p[i].id, p[i].name, &p[i].department, &p[i].salary);
//        fwrite(&p[i], sizeof(Person), 1, fp);
//        //fputc('\n',fp);
//    }
//    fclose(fp);
//}
//
//int main()
//{
//    BeforeTest();//�û����ԣ�����ɾ��
//    //�ڴ˴�д�Լ��Ĵ���
//    int m = 0;
//    scanf("%d", &m);
//    if (m > n)
//    {
//        printf("�ܼ�¼��%d���������벻����Ч��Χ�ڡ�", n);
//        return 0;
//    }
//    Person p[N];
//    FILE* fp = fopen("info.txt", "r");
//    rewind(fp);
//    fread(p, sizeof(Person), m, fp);
//    printf("�ܼ�¼��%d����%d����Ϣ��\n", n, m);
//    printf("ְ���ţ�%d\n", p[m - 1].id);
//    printf("������%s\n", p[m - 1].name);
//    printf("���ţ�%c\n", p[m - 1].department);
//    //if (p[m - 1].salary != fabs(p[m - 1].salary))
//    printf("���ʣ�%.2f\n", p[m - 1].salary);
//    //else
//    //{
//      //  printf("���ʣ�%.0f", p[m - 1].salary);
//    //}
//    return 0;
//}
//
//
//ʵ��10������ƽ��ֵ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////�˺��������������ԣ�����ɾ�����Լ��ύ�Ĵ���ҲҪ����������
//void BeforeTest()
//{
//    int i, x;
//    FILE* fp;
//    fp = fopen("data.txt", "w");
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &x);
//        fprintf(fp, "%d ", x);
//    }
//    fclose(fp);
//}
////�˺��������������ԣ�����ɾ�����Լ��ύ�Ĵ���ҲҪ����������
//void AfterTest()
//{
//    char x;
//    FILE* fp;
//    fp = fopen("data.txt", "r");
//    while ((x = fgetc(fp)) != EOF)
//        printf("%c", x);
//    fclose(fp);
//}
//int main()
//{
//    BeforeTest();//�û����ԣ�����ɾ��
//    //�ڴ˴�д�Լ��Ĵ���
//    FILE* fp = fopen("data.txt", "r+");
//    int temp = 0, sum = 0;
//    double ave = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        fscanf(fp, "%d", &temp);
//        sum += temp;
//    }
//    ave = sum / 10.0;
//    fseek(fp, 0L, SEEK_END);
//    fprintf(fp, "%.2lf", ave);
//    AfterTest();//�û����ԣ�����ɾ��
//    printf("%.2lf", ave);
//
//    return 0;
//}

//ʵ��10���ļ�����
//#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>
////�˺��������������ԣ�����ɾ�����Լ��ύ�Ĵ���ҲҪ����������
//void BeforeTest()
//{
//    int i, n;
//    char str[100][200];
//    FILE* fp;
//    fp = fopen("dataA.txt", "w");
//    scanf("%d", &n);
//    getchar();
//    for (i = 0; i < n; i++)
//    {
//        gets(str[i]);
//        fwrite(str[i], strlen(str[i]), 1, fp);
//        fputc('\n', fp);
//    }
//    fclose(fp);
//}
////�˺��������������ԣ�����ɾ�����Լ��ύ�Ĵ���ҲҪ����������
//void AfterTest()
//{
//    char x;
//    FILE* fp;
//    fp = fopen("dataB.txt", "r");
//    while ((x = fgetc(fp)) != EOF)
//        printf("%c", x);
//    fclose(fp);
//}
//int main()
//{
//    BeforeTest();//�û����ԣ�����ɾ��
//    //�ڴ˴�д�Լ��Ĵ���
//    FILE* fp1 = fopen("dataA.txt", "r+");
//    FILE* fp2 = fopen("dataB.txt", "w+");
//    char c;
//    while ((c = fgetc(fp1)) != EOF)
//    {
//        fputc(c, fp2);
//    }
//    fclose(fp1);
//    fclose(fp2);
//    AfterTest();//�û����ԣ�����ɾ��
//    return 0;
//}

//ʵ��10���ļ����ݺϲ�
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
//�˺��������������ԣ�����ɾ�����Լ��ύ�Ĵ���ҲҪ����������
char str[100][200];

void BeforeTest()
{
    int i = 0, j = 0;

    FILE* fp;
    char* filename[2] = { "dataA.txt","dataB.txt" };
    for (j = 0; j < 2; j++)
    {
        fp = fopen(filename[j], "w");
        i = 0;
        while (1)
        {
            fgets(str[i], 200, stdin);
            str[i][strlen(str[i]) - 1] = '\0';
            if (strlen(str[i]) == 0)
                break;
            fwrite(str[i], strlen(str[i]), 1, fp);
            fputc('\n', fp);
            i++;
        }
        fclose(fp);
    }
}
//�˺��������������ԣ�����ɾ�����Լ��ύ�Ĵ���ҲҪ����������
void AfterTest()
{
    char x;
    FILE* fp;
    fp = fopen("dataA.txt", "r");
    while ((x = fgetc(fp)) != EOF)
        printf("%c", x);
    fclose(fp);
}
int main()
{
    BeforeTest();//�û����ԣ�����ɾ��
    //�˴���д�Լ��Ĵ���

    FILE* fp1 = fopen("dataA.txt", "a+");
    FILE* fp2 = fopen("dataB.txt", "r");
    rewind(fp1);
    int i = 2;
    do
    {
        fseek(fp2, i * (-1), SEEK_END);
        char c = fgetc(fp2);
        fputc(c, fp1);
        i++;
    } while (ftell(fp2) > 1);
    rewind(fp1);
    AfterTest(); //�û����ԣ�����ɾ��
    return 0;
}