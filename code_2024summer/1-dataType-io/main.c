#include <stdio.h>


int main(){
    
    printf("Hello, World!\n");

    // C语言数据类型

    // 1. 数值类型
    // 1.1 整数类型
    int a = 10;  // 4字节, 32位, -2^31 ~ 2^31-1, -2147483648 ~ 2147483647
    short b = 20;  // 2字节, 16位, -2^15 ~ 2^15-1, -32768 ~ 32767
    long c = 30;  // 8字节, 64位, -2^63 ~ 2^63-1, -9223372036854775808 ~ 9223372036854775807
    // 1.1.1 无符号整数
    unsigned int d = 40;  // 4字节, 32位, 0 ~ 2^32-1, 0 ~ 4294967295
    unsigned short e = 50;  // 2字节, 16位, 0 ~ 2^16-1, 0 ~ 65535
    unsigned long f = 60;  // 8字节, 64位, 0 ~ 2^64-1, 0 ~ 18446744073709551615

    // 1.2 浮点类型
    float g = 3.14;  // 4字节, 32位, 1.2E-38 ~ 3.4E+38
    double h = 3.1415926;  // 8字节, 64位, 2.3E-308 ~ 1.7E+308
    long double i = 3.14159265358979323846;  // 16字节, 128位, 3.4E-4932 ~ 1.1E+4932
    

    // 2. 字符类型
    char j = 'A';  // 1字节, 8位, -128 ~ 127
    // ASCII码表: 0~127, 128~255
    // 0~31: 控制字符, 32~126: 可显示字符, 127: 删除字符, 128~255: 扩展字符
    // 48: '0', 65: 'A', 97: 'a'

    // 2.1 字符串类型
    char k[200] = "Hello, World!";  // 字符数组, 20字节, 20个字符, 19个字符+1个'\0'
    // 访问字符串中的字符
    printf("%c\n", k[0]);  // H
    printf("%c\n", k[1]);  // e
    printf("%c\n", k[2]);  // l
    printf("%c\n", k[3]);  // l
    printf("%c\n", k[4]);  // o


    // 3. 空类型
    // void g; // 无类型, 通常用于函数返回值, 一般不用于变量
    // void functionA(int a, int b){}  // 函数返回值为空


    // 4. 枚举类型 （enumerate——枚举）
    enum color {red, green, blue};  // red=0, green=1, blue=2
    enum color l = red;


    // 5. 派生类型
    // 5.1 数组类型
    int m[5] = {1, 2, 3, 4, 5};  // 5个元素, 0~4

    // 5.2 指针类型
    int *n = &a;  // 指向整数类型的指针
    // *j: 取值操作符, &a: 取地址操作符
    printf("%d\n", *n);  // 10，取n指向的地址的值
    printf("%p\n", n);  // n指向的地址

    // 5.3 结构体类型
    struct student{
        int id;
        char name[20];
        float score;
    };
    struct student o = {1, "Tom", 90.5};
    // 结构体用于把不同类型的数据组合在一起
    // 访问结构体中的成员
    printf("%d\n", o.id);  // 1
    printf("%s\n", o.name);  // Tom
    printf("%.1f\n", o.score);  // 90.5

    // 5.4 共用体类型，C语言中的共用体是一种特殊的数据类型，共用体的大小为最大成员的大小
    union data{
        int i;
        float f;
    };
    union data p;
    p.i = 10;
    // 共用体中的所有成员共享同一块内存，节省了内存空间
    // 共用体的大小为最大成员的大小
    printf("%d\n", p.i);  // 10
    printf("%f\n", p.f);  // 0.000000
    printf("%d\n", sizeof(union data));  // 4
    printf("%d\n", sizeof(p));  // 4
    printf("%d\n", sizeof(p.i));  // 4
    printf("%d\n", sizeof(p.f));  // 4
    printf("%p\n", &p.i);  // p.i的地址
    printf("%p\n", &p.f);  // p.f的地址
    // 因为共用体中的所有成员共享同一块内存，所以l.i和l.f的地址是一样的，但是l.i和l.f的值是不一样的
    // 在给共用体的成员赋值后，共用体的所有成员的值都会改变
    p.i = 20;
    printf("%d\n", p.i);  // 20
    printf("%f\n", p.f);  // 0.000000
    p.f = 5.20;
    printf("%d\n", p.i);  // 1084647014
    printf("%f\n", p.f);  // 5.200000
    // 一般情况下，我们不会使用共用体，因为共用体的成员共享同一块内存，会导致数据混乱

    return 0;
}


