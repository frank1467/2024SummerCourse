#include <stdio.h>

// 找出数组中第三大的数
// input：一个数组array1，长度是10
// output：数组中第三大的数thirdLargest
// 例如：
// 输入：
// 1 2 3 4 5 6 7 8 9 10
// 输出：
// The third largest number is: 8

int main(){
    // input
    int array1[10];
    printf("Please enter 10 integers: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &array1[i]);
    }
    int thirdLargest = 0;

    // Please add your code here



    // output
    printf("The third largest number is: %d\n", thirdLargest);

    return 0;
}