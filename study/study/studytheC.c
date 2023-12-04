#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    int n, num;
//    int negative = 0, zero = 0, positive = 0;
//    printf("请输入需要统计的数值个数：");
//    scanf("%d", &n);
//
//    printf("请输入%d个整数：\n", n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &num);
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
//    scanf("%d %d", &a, &b);
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
//        scanf("%d %d", &a, &b);
//    if (a > b) {
//        printf("%d", a);
//    }
//    else {
//        printf("%d", b);
//    }
//    return 0;
//}
            //用函数实现:
//#include<stdio.h>
//int MAX(int x, int y) {
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int r = MAX(a, b);
//    printf("%d", r);
//    return 0;
//}


                  //操作符
//#include<stdio.h>
//int main() {
//    float a = 7 / 2.0;
//    int b = 7 % 2;
//    printf("%.1f\n", a);          //除号两端都是整数时，结果也是整数。两端只要有一个浮点数就输出浮点数
//    printf("%d", b);              //取余操作符两端只能是整数
//    return 0;
//}

     //单目操作符
     // ! 逻辑反操作；-负值；+正值；sizeof操作数的类型长度（以字节为单位）；~对一个数的二进制按位取反；*间接访问操作符（解引用操作符）；（类型）强制类型转换
//#include<stdio.h>
//int main() {
//    //int flag = 0;              //0为假，非0为真      flag=0表示flag为假
//    //if (!flag) {               //则！flag表示真
//    //    printf("hao \n");               
//    //}
//    //int a = 10;
//    //double b = 3.00;
//    //printf("%d\n", sizeof(int));
//    //printf("%d %d\n", sizeof(a),sizeof(b));
//    //int arr[10] = { 0 };
//    //printf("%d\n", sizeof(arr));        //结果是40.一个int为4，有十个int，所以40.单位是字节
//    //printf("%d\n", sizeof(arr[0]));
//    //int a = 10;
//    //int b = a++;          //后置++，先使用，再++
//    //printf("%d\n", b);
//    //printf("%d\n", a);
//    /*int a = (int)3.14;
//    printf("%d\n", a);   */     //（类型）强制类型转换
//    /*int a = 10;
//    int b = 20;
//    int c = a > b ? a : b;        //条件操作符：exp1？exp2：exp3
//    printf("%d\n", c);*/
//    int a = 10, b = 20, c = 0;
//    int d = (c = a - b, a = b + c, c - 3);           //逗号表达式：从左到右依次计算，整个表达式的结果是最后一个表达式的结果。
//    printf("%d\n", d);
//    return 0;
//}


//求最大公约数，最小公倍数
//#include <stdio.h>
//int main()
//{
//    int m, n, max, min, b, c;
//    scanf("%d%d", &m, &n);
//    c = m % n;
//    b = m * n;
//    while (c != 0)
//    {
//        m = n;
//        n = c;
//        c = m % n;
//    }
//    max = n;
//    min = b / max;
//    printf("\n最大公约数为：%d\n最小公倍数为：%d\n", max, min);
//    return 0;
//}

//          反弹球
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    float M, N, sum = 0;
//
//    scanf("%f %f", &M, &N);
//
//    sum = M;	      //第一次下落高度
//
//    for (i = 1; i <= N; i++)
//    {
//        M /= 2;
//        if (i == N) {
//            break;
//        }
//        sum += 2 * M; //来回的路程之和
//    }
//
//    printf("%.2f %.2f", M, sum);
//
//    return 0;
//}
//            求n之内的素数
//#include<stdio.h>
//#include<math.h>
//int main() {
//    int n;
//    scanf("%d", &n);
//    int i, j, x;
//    for (i = 2; i <= n; i++) {
//        x = sqrt(i);
//        for (j = 2; j <= x; j++) {
//            if (i % j == 0) {
//                break;
//            }
//        }
//        if (j > x) {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}


//                                                                          关键字：C语言本身内置
//auto break case char const continue default do double extern float for goto if int long register return s sizeof static struct switch typedef union unsigned void



//   static:1.修饰局部变量     2.修饰全局变量      3.修饰函数   

//static函数：修饰局部变量时局部变量出作用域后不会销毁，实质上是改变了变量的存储位置。（原来在栈区，变化后在静态区）

//#include<stdio.h>
//void test() {
//    static int a = 1;
//    a++;
//    printf("%d ", a);
//}
//int main() {
//    int i = 0;
//    while (i < 10) {
//        test();
//        i++;
//    }
//    return 0;
//}

//static修饰全局变量：修饰全局变量时，全局变量的外部链接属性会变为内部链接属性，其它的源文件（.c）不能使用这个全局变量。

/*extern int val;*/    //extern为声明外部符号

//static修饰函数


                                                                     //指针
//
//#include<stdio.h>
//int main() {
//    int a = 10;                            //向内存申请4个字节，存储10
//    &a;                                   //取地址操作符
//    int* p = &a;                         //p为指针变量                *说明p为指针变量
//    printf("%p\n", &a);
//    *p = 20;                 //*p为解引用操作符，通过p中存放的地址找到p所指的对象，*p就额是p指向的对象
//    printf("%d", a);
//
// /*   char ch = 'w';
//    char* pc = &ch;
//    printf("%p\n", &ch);*/
//
//    return 0;
//}

                     //指针变量的大小
#include<stdio.h>
int main() {
    printf("%zd\n", sizeof(char*));
    printf("%zd\n", sizeof(int*));
    printf("%zd\n", sizeof(long*));
    printf("%zd\n", sizeof(float*));
    printf("%zd\n", sizeof(double*));
    return 0;
}















