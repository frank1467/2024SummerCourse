#include <stdio.h>

/*
* 函数的概念
* 函数是一段封装好的代码，可以重复调用
* 函数的定义：

* 返回值类型 函数名(参数列表){
*     函数体
* }

* 返回值类型：函数的返回值类型，可以是int、float、char、void等
* 函数名：函数的名字，可以自定义
* 参数列表：函数的参数，可以有多个参数，也可以没有参数
* 函数体：函数的具体实现

* 函数的调用
* 函数名(参数列表)

* 例如：
* int add(int a, int b){
*     return a + b;
* }
*/
int findMax(int numbers[10]);

int main(){
    printf("Please enter 10 numbers:\n");
    int numbers[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &numbers[i]);
    }
    int max = findMax(numbers);
    printf("The max number is: %d\n", max);
    return 0;
}

int findMax(int numbers[10]){
    int max = numbers[0];
    for(int i = 1; i < 10; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}