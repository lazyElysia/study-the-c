//#include <stdio.h>
//int main() {
//    int n, num;
//    int negative = 0, zero = 0, positive = 0;
//    printf("请输入需要统计的数值个数：");
//    scanf_s("%d", &n);
//
//    printf("请输入%d个整数：\n", n);
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &num);
//        if (num < 0) {
//            negative++;
//        }
//        else if (num == 0) {
//            zero++;
//        }
//        else {
//            positive++;
//        }
//    }
//
//    printf("负数个数：%d\n", negative);
//    printf("零的个数：%d\n", zero);
//    printf("正数个数：%d\n", positive);
//    
//    return 0;
//}




         //%d-打印整型 
         //% c - 打印字符
         //%s-打印字符串 
         //%f-打印float类型的数据 
         //%lf-打印double类型的数据 
        //%zu-打印sizeof的返回值




//转义字符
     // \?  在书写连续多个问号时使用，防止他们被解析成三字母词
     // \' 用于表示字符常量
     // \" 用于表示一个字符串内部的双引号
     // \\ 用于表示一个反斜杠，防止它被解释为一个转义序列符
     // \a 警告字符，蜂鸣
     // \b 退格符
     // \f 进纸符
     // \n 换行
     // \r 回车
     // \t 水平制表符
     // \v 垂直制表符
     // \ddd ddd表示1~3个八进制的数字。如：\130×
     // \xdd dd表示2个十六进制数字。如：x300
//#include <stdio.h>
//int main() {
//	printf("abc\n\0df\n");    /* \0为结束标志*/
//	printf("abc\\0df\n");
//	printf("%c\n", '\'');    /*不能单独打印'单引号，要用转义字符，双引号同理*/
//	printf("\"\n");
//	printf("\a\n");       /*\a触发电脑蜂鸣警报*/
//	printf("%c %c\n", '\130','\063');  /*\130:打印八进制的130(X)*/
//	printf("%d\n", strlen("qwe rt"));
//	printf("%d\n", strlen("c:\\test\\628\\test.c"));   /*\t \62都是转义字符，相当于一个字符，要加双斜杠*/
//	return 0;
//}


                                //函数
//#include<stdio.h>
//int Add(int a, int b) {
//    return a + b;    //int z=0;z=a+b;return z;也可以
//}
//int main() {
//    int a, b;
//    scanf_s("%d %d", &a, &b);
//    int sum = Add(a, b);
//    printf("%d", sum);
//    return 0;
//}


//数组：一组相同类型元素的集合
//#include<stdio.h>
//int main() {
//    int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };      //数组有下标即序号，从零开始，第一个字符是0，第二个是,[]里也可以不写，会根据后面数组的数量判断
//    int i = 0;
//    while (i < 10) {
//        printf("%d ", arr[i]);
//        i++;
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main() {
//    char arr[4] = {'b','i','t'};                //[]里写3或者不写printf出来的都是随机值,或者用“bit”方式
//    printf("%d", strlen(arr));
//    return 0;
//}
            //比较两个数  常规:
//#include<stdio.h>
//int main() {
//    int a, b;
//    printf("请输入两个整数：");
//        scanf_s("%d %d", &a, &b);
//    if (a > b) {
//        printf("%d", a);
//    }
//    else {
//        printf("%d", b);
//    }
//    return 0;
//}
            //用函数实现:
#include<stdio.h>
int MAX(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}
int main() {
    int a, b;
    scanf_s("%d %d", &a, &b);
    int r = MAX(a, b);
    printf("%d", r);
    return 0;
}
