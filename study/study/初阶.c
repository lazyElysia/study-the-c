#define  _CRT_SECURE_NO_WARNINGS
                                                                  //CÓïÑÔ³õ½×
//CÓïÑÔÖĞÓï¾ä·ÖÎª£º±í´ïÊ½Óï¾ä   º¯Êıµ÷ÓÃÓï¾ä    ¿ØÖÆÓï¾ä      ¸´ºÏÓï¾ä      ¿ÕÓï¾ä
//                                                       ·ÖÎª£ºÌõ¼şÅĞ¶ÏÓï¾ä£¨·ÖÖ§Óï¾ä£©ifÓï¾ä switchÓï¾ä      Ñ­»·Ö´ĞĞÓï¾ä£ºdo whileÓï¾ä  whileÓï¾ä  forÓï¾ä       ×ªÏòÓï¾ä£ºbreak goto continue return                   


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



#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        qsort(arr, n, sizeof(int), compare);

        int flag = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] <= arr[i - 1]) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}




