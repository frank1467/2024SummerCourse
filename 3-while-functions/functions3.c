#include <stdio.h>

// 选择排序 selection sort
// 原理：每次从未排序的元素中选择最小的元素，放到已排序的元素的末尾
// 为什么选择排序可以得到正确的排序结果？
// 1. 每次选择最小的元素，所以每次选择都会把一个元素放到正确的位置
// 2. 重复n次，就可以得到正确的排序结果
//https://www.bilibili.com/video/BV175411U71n/?spm_id_from=333.337.search-card.all.click&vd_source=a2ef13a0bb451e92cfc660e22db784c0

void selectionSort(int numbers[10]){
    //TODO
}

int main(){
    printf("Please enter 10 numbers:\n");
    int numbers[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &numbers[i]);
    }
    selectionSort(numbers);
    printf("The sorted numbers are:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}