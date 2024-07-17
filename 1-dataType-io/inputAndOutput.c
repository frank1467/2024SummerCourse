#include <stdio.h>

int main(){
    // C语言的I/O操作
    // 1. 标准输入输出

    // 1.1 printf()函数
    // printf()函数用于输出数据到控制台

    // %d: 整数, %f: 浮点数, %c: 字符, %s: 字符串
    int a = 10;
    float b = 13.14;
    char c = 'A';
    char d[20] = "Hello, World!";
    printf("a=%d, b=%f, c=%c, d=%s\n", a, b, c, d);

    // %p: 指针, %x: 十六进制 0x10    , %o: 八进制  o10, %e: 科学计数法
    int *e = &a;
    printf("e=%p, a=%x, a=%o, b=%e\n", e, a, a, b);

    // %u: 无符号整数, %ld: 长整数, %lu: 无符号长整数
    unsigned int f = -10;
    long g = 1000000000;
    unsigned long h = 1000000000;
    printf("f=%u, g=%ld, h=%lu\n", f, g, h);

    
    // 1.2 scanf()函数
    // scanf()函数用于从控制台输入数据
    // &a: 取地址操作符
    // scanf()函数返回值为成功读取的数据个数
    // scanf()函数读取数据时，遇到空格、制表符、回车键就会停止读取
    scanf("%d%f", &a, &b);  // 从控制台输入一个整数，存储到a中
    printf("a=%d\n", a);  // 输出a的值
    printf("b=%f\n", b);  // 输出b的值

    return 0;
}