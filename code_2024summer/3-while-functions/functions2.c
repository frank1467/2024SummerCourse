#include <stdio.h>

// 冒泡排序 bubble sort
// 原理：比较相邻的元素。如果第一个比第二个大，就交换它们两个
// 为什么冒泡排序可以得到正确的排序结果？
// 1. 每次比较都是相邻的两个元素，所以每次比较都会把一个元素放到正确的位置
// 2. 重复n次，就可以得到正确的排序结果
// https://www.bilibili.com/video/BV13J411L72U/?spm_id_from=333.337.search-card.all.click&vd_source=a2ef13a0bb451e92cfc660e22db784c0

void bubbleSort(int numbers[10]){
    //TODO
}

int main(){
    printf("Please enter 10 numbers:\n");
    int numbers[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &numbers[i]);
    }
    bubbleSort(numbers);
    printf("The sorted numbers are:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}