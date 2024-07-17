#include <stdio.h>

// input：两个数组array1和array2，长度都是5
// output：合并且排好序的数组array3，长度是10
// 例如：
// 输入：
// 9 2 6 4 5
// 1 7 8 3 10
// 输出：
// 1 2 3 4 5 6 7 8 9 10

int main(){
    // input
    int array1[5];
    printf("Please enter 5 integers for the first array: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &array1[i]);
    }

    int array2[5];
    printf("Please enter 5 integers for the second array: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &array2[i]);
    }
    int array3[10];
    // please add your code here




    // output
    printf("The merged array is: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", array3[i]);
    }
    printf("\n");

    return 0;
}