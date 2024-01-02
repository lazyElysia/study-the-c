#define  _CRT_SECURE_NO_WARNINGS
                                                                  //C语言初阶
//C语言中语句分为：表达式语句   函数调用语句    控制语句      复合语句      空语句
//                                                       分为：条件判断语句（分支语句）if语句 switch语句      循环执行语句：do while语句  while语句  for语句       转向语句：break goto continue return                   


//#include<stdio.h>
//int main() {
//    char arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    for (int i = 0; i < 12; i++) {
//        printf("%c", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

//#include<stdio.h>
//int main() {
//    int year, month, date;
//    scanf("%4d%2d%2d", &year, &month, &date);
//    printf("year=%d\nmonth=%d\ndate=%d\n", year,month,date);
//    return 0;
//}




//#include<stdio.h>
//int main() {
//    int x, y1, y2, y3;
//    scanf("%d", &x);
//    y1 = 2 * x * x - 3;
//    y2 = 5 * x + 2;
//    y3 = 100 - x * x;
//    int max = y1;
//    if (y1 < y2) max = y2;
//    else if (y1 < y3) max = y3;
//    else if (y2 < y3) max = y3;
//    printf("%d %d %d ", y1, y2, y3);
//    printf("%d", max);
//    return 0;
//}



//#include<stdio.h>
//int main() {
//    int n, i, j, t;
//    int a[10];
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%d ", &a[i]);
//    }
//    for (i = 0; i < n; i++) {
//        for (j = i + 1; j < n; j++) {
//            if (a[i] > a[j]) {
//                t = a[j];
//                a[j] = a[i];
//                a[i] = t;
//            }
//        }
//    }
//    for (i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}





//#include<stdio.h>
//#include<string.h>
//typedef struct student {
//    char name[20];
//    char id[20];
//    int a, b, c;
//    int sum;
//} stu;
//int main() {
//    stu students[100];
//    int n, i, j;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%s %s %d %d %d", students[i].name, students[i].id, &students[i].a, &students[i].b, &students[i].c);
//        students[i].sum = students[i].a + students[i].b + students[i].c;
//    }
//    for (i = 0; i < n; i++) {
//        for (j = i + 1; j < n; j++) {
//            if (students[i].sum < students[j].sum) {
//                stu temp = students[j];
//                students[j] = students[i];
//                students[i] = temp;
//            }
//            else if (students[i].sum == students[j].sum) {
//                if (strcmp(students[i].name, students[j].name) > 0) {
//                    stu temp = students[j];
//                    students[j] = students[i];
//                    students[i] = temp;
//                }
//            }
//        }
//    }
//    for (i = 0; i < n; i++) {
//        printf("%s %s %d %d %d %d\n", students[i].name, students[i].id, students[i].a, students[i].b, students[i].c, students[i].sum);
//    }
//    return 0;
//}




//#include <stdio.h>
//int main() {
//    int john[10];
//    int* p;
//    for(int i=0;i<10;i++){
//        scanf("%d",&john[i]);
//    }
//    int ming;
//    scanf("%d",&ming);
//    p=john;
//    while(p<john+10) {
//        if (*p==ming) {
//            printf("Yes\n");
//            return 0;
//        }
//        p++;
//    }
//    printf("No\n");
//    return 0;
//}



//#include<stdio.h>
//#include<string.h>
//typedef struct People {
//	char name[21];  //姓名
//	int ticket;  //选票数 
//}f;
//
//int main()
//{
//	int i, n = 0, max, flag;
//	char str[21];
//	f a[100];
//	while (scanf("%s", str), strcmp(str, '#') != 0)
//	{
//		flag = 0;
//		//循环判断输入的名字受否已经存在结构体数组中
//		for (i = 0; i < n; i++)
//		{
//			flag = 0;
//			if (strcmp(str, a[i].name) == 0)
//			{
//				flag = 1;
//				a[i].ticket++;
//				break;
//			}
//		}
//		//若不存在结构体数组中，将名字加入
//		if (flag == 0)
//		{
//			strcpy(a[n].name, str);
//			a[n].ticket = 1;
//			n++;
//		}
//	}
//	//利用循环找到得票最多的人
//	max = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (a[i].ticket > a[max].ticket)
//			max = i;
//	}
//	//输出
//	printf("%s\n", a[max].name);
//	return 0;
//}





//#include<stdio.h>
//void shui(int x, int y) {
//    int i, g, s, b;
//    int flag = 0;
//    for (i = x; i <= y; i++) {
//        g = i % 10;
//        s = i / 10 % 10;
//        b = i / 100;
//        if (i == g * g * g + s * s * s + b * b * b) {
//            flag = 1;
//            printf("%d ", i);
//        }
//    }
//    if (flag == 0) {
//        printf("no\n");
//    }
//}
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b)!=EOF) {
//        shui(a, b);
//    }
//    return 0;
//}


//
//#include<stdio.h>
//int main() {
//    int a[10]={0}, i, j;
//    int n;
//    for (i = 0; i < 9; i++) {
//        scanf("%d ", &a[i]);
//    }
//    scanf("%d", &n);
//    i = 0;
//    while (n > a[i]) {
//        i++;
//    }
//    for (j = 0; j < i; j++) {
//        printf("%d\n", a[j]);
//    }
//    printf("%d\n", n);
//    for (i; i < 9; i++) {
//        printf("%d\n", a[i]);
//    }
//    return 0;


//#include <stdio.h>
//
//int main() {
//    int arr[10] = { 10, 9, 8, 7, 5, 5, 4, 3, 2, 1 };
//    int* ptr = arr;
//
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", *(ptr + i));
//    }
//
//    return 0;
//}




//#include<stdio.h>
//typedef struct student {
//    char id[20];
//    char name[20];
//    int a, b, c;
//    int sum;
//}stu;
//int main() {
//    int i = 0;
//    int n;
//    scanf("%d", &n);
//    stu s[100], sum;
//    for (i = 0; i < n; i++) {
//        scanf("%s %s %d %d %d", s[i].id, s[i].name, &s[i].a, &s[i].b, &s[i].c);
//        s[i].sum = s[i].a + s[i].b + s[i].c;
//    }
//    for (i = 0; i < n; i++) {
//        int max = s[i].sum;
//        if (s[i].sum < s[i + 1].sum) {
//            max = s[i + 1].sum;
//        }
//    }
//    printf("%s %s %d %d %d", s[i].id, s[i].name, s[i].a, s[i].b, s[i].c);
//    return 0;
//}






//#include<stdio.h>
//struct Student {
//	char sno[15];
//	char name[25];
//	int c,m,e;
//};
//int main()
//{
//	int n, i, max = 0;
//	scanf("%d", &n);
//	struct Student a[100];
//	int s[100];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s%s%d%d%d", a[i].sno, a[i].name, &a[i].c, &a[i].m, &a[i].e);
//		s[i] = a[i].c + a[i].m + a[i].e;
//		if (s[i] > s[max])
//			max = i;
//	}
//	printf("%s %s %d %d %d\n", a[max].sno, a[max].name, a[max].c, a[max].m, a[max].e);
//	return 0;
//}





//#include<stdio.h>
//typedef struct student {
//    char id[20];
//    char name[20];
//    int a, b, c;
//    int sum;
//}gra;
//int main() {
//    int i = 0, j = 0, n, a[100];
//    gra s[100];
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%s %s %d %d %d", s[i].id, s[i].name, &s[i].a, &s[i].b, &s[i].c);
//        s[i].sum = s[i].a + s[i].b + s[i].c;
//    }
//    for (i = 0; i < n; i++) {
//        for (j = i; j < n; j++) {
//            if (s[i].sum < s[j].sum) {
//                gra temp = s[j];
//                s[j] = s[i];
//                s[i] = temp;
//            }
//            else if (s[i].sum == s[j].sum) {
//                if (strcmp(s[i].name, s[j].name) > 0) {
//                    gra temp = s[j];
//                    s[j] = s[i];
//                    s[i] = temp;
//                }
//            }
//        }
//    }
//    for (i = 0; i < n; i++) {
//        printf("%s %s %d %d %d\n", s[i].id, s[i].name, s[i].a, s[i].b, s[i].c);
//    }
//    return 0;
//}



//#include <stdio.h>
//void swap(int* pa, int* pb) {
//    int t;
//    t = *pa;
//    *pa = *pb;
//    *pb = t;
//}
//int main() {
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    if (a < b) swap(&a, &b);
//    if (a < c) swap(&a, &c);
//    if (a < d) swap(&a, &d);
//    if (b < c) swap(&b, &c);
//    if (b < d) swap(&b, &d);
//    if (c < d) swap(&c, &d);
//    printf("%d %d %d %d", a, b, c, d);
//    return 0;
//}

//#include<stdio.h>
//int main() {
//    int n;
//    while (scanf("%d ", &n) != EOF) {
//        printf("%c", n);
//    }
//    return 0;
//}




//#include<stdio.h>
//int main() {
//    int n;
//    scanf("%d", &n);
//    int i = 1;
//    long long sn = 1;
//    long long sum = 0;
//    for (i = 1; i <= n; i++) {
//        sn *= i;
//        sum += sn;
//    }
//    printf("%lld", sum);
//    return 0;
//}



//#include<stdio.h>
//typedef struct point {
//    int x;
//    int y;
//}po;
//int main() {
//    po s[100], t;
//    int n;
//    int i, j;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%d%d", &s[i].x, &s[i].y);
//    }
//    for (i = 0; i < n; i++) {
//        for (j = i; j < n; j++) {
//            if (s[i].x > s[j].x) {
//                t = s[j];
//                s[j] = s[i];
//                s[i] = t;
//            }
//            else if (s[i].x == s[j].x) {
//                if (s[i].y > s[j].y) {
//                    t = s[j];
//                    s[j] = s[i];
//                    s[i] = t;
//                }
//            }
//        }
//    }
//    for (i = 0; i < n; i++) {
//        printf("(%d,%d) ", s[i].x, s[i].y);
//    }
//    printf("\n");
//    for (i = n-1; i >=0; i--) {
//        printf("(%d,%d) ", s[i].x, s[i].y);
//    }
//    printf("\n");
//    return 0;
//}




//#include<stdio.h>
//#include<string.h>
//typedef struct People {
//	char name[21];  //姓名
//	int ticket;  //选票数 
//}f;
//
//int main()
//{
//	int i, n = 0, max, flag;
//	char str[21];
//	f a[100];
//
//	while (scanf("%s", str), strcmp(str, "#") != 0)
//	{
//		flag = 0;
//		//循环判断输入的名字受否已经存在结构体数组中
//		for (i = 0; i < n; i++)
//		{
//			flag = 0;
//			if (strcmp(str, a[i].name) == 0)
//			{
//				flag = 1;
//				a[i].ticket++;
//				break;
//			}
//		}
//		//若不存在结构体数组中，将名字加入
//		if (flag == 0)
//		{
//			strcpy(a[n].name, str);
//			a[n].ticket = 1;
//			n++;
//		}
//	}
//	//利用循环找到得票最多的人
//	max = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (a[i].ticket > a[max].ticket)
//			max = i;
//	}
//	//输出
//	printf("%s\n", a[max].name);
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//struct point {  
//    double x;
//    double y;
//};
//
//double sum(struct point s1, struct point s2)
//{
//    double s;
//    s = (s1.x - s2.x) * (s1.y - s2.y);
//    return s;
//}
//int main()
//{
//    double s;
//    struct point s1, s2;
//    scanf("%lf %lf %lf %lf", &s1.x, &s1.y, &s2.x, &s2.y);
//    s = sum(s1, s2);
//    printf("%.2lf", s);
//    return 0;
//}




                                                             //函数递归
//#include<stdio.h>
//void print(unsigned int n) {
//    if (n > 9) {
//        print(n / 10);
//    }
//    printf("%d ", n%10);
//}
//int main() {
//    unsigned int num;
//    scanf("%u", &num);
//    print(num);
//    return 0;
//}





#include<stdio.h>
#include<string.h>
int my_strlen(char* arr) 
{
    int count = 0;
    while (*arr != '\0')
    {
        count++;
        arr++;
    }
    return count;
}
int main()
{
    char str[] = "abc";
    int len = my_strlen(str);
    printf("%d\n", len);
    return 0;
}






























