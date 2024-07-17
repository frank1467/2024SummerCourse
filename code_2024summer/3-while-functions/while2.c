#include <stdio.h>
/*
* while循环的第二个例子
* 杨辉三角
* 定义：杨辉三角是一个三角形，其第n行有n个数，第一个数和最后一个数都是1，其余的数是上一行的两个数相加
* 例如：
*         1
*        1 1
*       1 2 1
*      1 3 3 1
*     1 4 6 4 1
*    1 5 10 10 5 1
*   1 6 15 20 15 6 1
*  1 7 21 35 35 21 7 1
* 1 8 28 56 70 56 28 8 1
*          ...
* 输入：一个整数n，表示杨辉三角的行数
* 输出：杨辉三角的前n行
*/
int main(){
    int n;
    printf("Please enter the number of rows of the Pascal's Triangle:\n");
    scanf("%d", &n);

    return 0;
}