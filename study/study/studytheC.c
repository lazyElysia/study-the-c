#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    int n, num;
//    int negative = 0, zero = 0, positive = 0;
//    printf("��������Ҫͳ�Ƶ���ֵ������");
//    scanf("%d", &n);
//
//    printf("������%d��������\n", n);
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
//    printf("����������%d\n", negative);
//    printf("��ĸ�����%d\n", zero);
//    printf("����������%d\n", positive);
//    
//    return 0;
//}




         //%d-��ӡ���� 
         //% c - ��ӡ�ַ�
         //%s-��ӡ�ַ��� 
         //%f-��ӡfloat���͵����� 
         //%lf-��ӡdouble���͵����� 
        //%zu-��ӡsizeof�ķ���ֵ




                                                                                            //ת���ַ�
     // \?  ����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ��
     // \' ���ڱ�ʾ�ַ�����
     // \" ���ڱ�ʾһ���ַ����ڲ���˫����
     // \\ ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
     // \a �����ַ�������
     // \b �˸��
     // \f ��ֽ��
     // \n ����
     // \r �س�
     // \t ˮƽ�Ʊ��
     // \v ��ֱ�Ʊ��
     // \ddd ddd��ʾ1~3���˽��Ƶ����֡��磺\130��
     // \xdd dd��ʾ2��ʮ���������֡��磺x300
//#include <stdio.h>
//int main() {
//	printf("abc\n\0df\n");    /* \0Ϊ������־*/
//	printf("abc\\0df\n");
//	printf("%c\n", '\'');    /*���ܵ�����ӡ'�����ţ�Ҫ��ת���ַ���˫����ͬ��*/
//	printf("\"\n");
//	printf("\a\n");       /*\a�������Է�������*/
//	printf("%c %c\n", '\130','\063');  /*\130:��ӡ�˽��Ƶ�130(X)*/
//	printf("%d\n", strlen("qwe rt"));
//	printf("%d\n", strlen("c:\\test\\628\\test.c"));   /*\t \62����ת���ַ����൱��һ���ַ���Ҫ��˫б��*/
//	return 0;
//}


                                                                                  //����
//#include<stdio.h>
//int Add(int a, int b) {
//    return a + b;    //int z=0;z=a+b;return z;Ҳ����
//}
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int sum = Add(a, b);
//    printf("%d", sum);
//    return 0;
//}


//���飺һ����ͬ����Ԫ�صļ���
//#include<stdio.h>
//int main() {
//    int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };      //�������±꼴��ţ����㿪ʼ����һ���ַ���0���ڶ�����,[]��Ҳ���Բ�д������ݺ�������������ж�
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
//    char arr[4] = {'b','i','t'};                //[]��д3���߲�дprintf�����Ķ������ֵ,�����á�bit����ʽ
//    printf("%d", strlen(arr));
//    return 0;
//}
            //�Ƚ�������  ����:
//#include<stdio.h>
//int main() {
//    int a, b;
//    printf("����������������");
//        scanf("%d %d", &a, &b);
//    if (a > b) {
//        printf("%d", a);
//    }
//    else {
//        printf("%d", b);
//    }
//    return 0;
//}
            //�ú���ʵ��:
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


                  //������
//#include<stdio.h>
//int main() {
//    float a = 7 / 2.0;
//    int b = 7 % 2;
//    printf("%.1f\n", a);          //�������˶�������ʱ�����Ҳ������������ֻҪ��һ�������������������
//    printf("%d", b);              //ȡ�����������ֻ��������
//    return 0;
//}

     //��Ŀ������
     // ! �߼���������-��ֵ��+��ֵ��sizeof�����������ͳ��ȣ����ֽ�Ϊ��λ����~��һ�����Ķ����ư�λȡ����*��ӷ��ʲ������������ò��������������ͣ�ǿ������ת��
//#include<stdio.h>
//int main() {
//    //int flag = 0;              //0Ϊ�٣���0Ϊ��      flag=0��ʾflagΪ��
//    //if (!flag) {               //��flag��ʾ��
//    //    printf("hao \n");               
//    //}
//    //int a = 10;
//    //double b = 3.00;
//    //printf("%d\n", sizeof(int));
//    //printf("%d %d\n", sizeof(a),sizeof(b));
//    //int arr[10] = { 0 };
//    //printf("%d\n", sizeof(arr));        //�����40.һ��intΪ4����ʮ��int������40.��λ���ֽ�
//    //printf("%d\n", sizeof(arr[0]));
//    //int a = 10;
//    //int b = a++;          //����++����ʹ�ã���++
//    //printf("%d\n", b);
//    //printf("%d\n", a);
//    /*int a = (int)3.14;
//    printf("%d\n", a);   */     //�����ͣ�ǿ������ת��
//    /*int a = 10;
//    int b = 20;
//    int c = a > b ? a : b;        //������������exp1��exp2��exp3
//    printf("%d\n", c);*/
//    int a = 10, b = 20, c = 0;
//    int d = (c = a - b, a = b + c, c - 3);           //���ű��ʽ�����������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ����
//    printf("%d\n", d);
//    return 0;
//}


//�����Լ������С������
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
//    printf("\n���Լ��Ϊ��%d\n��С������Ϊ��%d\n", max, min);
//    return 0;
//}

//          ������
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    float M, N, sum = 0;
//
//    scanf("%f %f", &M, &N);
//
//    sum = M;	      //��һ������߶�
//
//    for (i = 1; i <= N; i++)
//    {
//        M /= 2;
//        if (i == N) {
//            break;
//        }
//        sum += 2 * M; //���ص�·��֮��
//    }
//
//    printf("%.2f %.2f", M, sum);
//
//    return 0;
//}
//            ��n֮�ڵ�����
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


//                                                                          �ؼ��֣�C���Ա�������
//auto break case char const continue default do double extern float for goto if int long register return s sizeof static struct switch typedef union unsigned void



//   static:1.���ξֲ�����     2.����ȫ�ֱ���      3.���κ���   

//static���������ξֲ�����ʱ�ֲ�������������󲻻����٣�ʵ�����Ǹı��˱����Ĵ洢λ�á���ԭ����ջ�����仯���ھ�̬����

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

//static����ȫ�ֱ���������ȫ�ֱ���ʱ��ȫ�ֱ������ⲿ�������Ի��Ϊ�ڲ��������ԣ�������Դ�ļ���.c������ʹ�����ȫ�ֱ�����

/*extern int val;*/    //externΪ�����ⲿ����

//static���κ���


                                                                     //ָ��
//
//#include<stdio.h>
//int main() {
//    int a = 10;                            //���ڴ�����4���ֽڣ��洢10
//    &a;                                   //ȡ��ַ������
//    int* p = &a;                         //pΪָ�����                *˵��pΪָ�����
//    printf("%p\n", &a);
//    *p = 20;                 //*pΪ�����ò�������ͨ��p�д�ŵĵ�ַ�ҵ�p��ָ�Ķ���*p�Ͷ���pָ��Ķ���
//    printf("%d", a);
//
// /*   char ch = 'w';
//    char* pc = &ch;
//    printf("%p\n", &ch);*/
//
//    return 0;
//}

                     //ָ������Ĵ�С
#include<stdio.h>
int main() {
    printf("%zd\n", sizeof(char*));
    printf("%zd\n", sizeof(int*));
    printf("%zd\n", sizeof(long*));
    printf("%zd\n", sizeof(float*));
    printf("%zd\n", sizeof(double*));
    return 0;
}















