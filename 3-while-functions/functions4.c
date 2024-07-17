#include <stdio.h>

// 插入排序 insertion sort
// 原理：每次从未排序的元素中选择一个元素，插入到已排序的元素中
// 为什么插入排序可以得到正确的排序结果？
// 1. 每次选择一个元素，插入到已排序的元素中，所以每次选择都会把一个元素放到正确的位置
// 2. 重复n次，就可以得到正确的排序结果
// https://www.bilibili.com/video/BV1xB4y1L7eS/?spm_id_from=333.337.search-card.all.click&vd_source=a2ef13a0bb451e92cfc660e22db784c0

void insertionSort(int numbers[10]){
    //TODO
}

int main(){
    printf("Please enter 10 numbers:\n");
    int numbers[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &numbers[i]);
    }
    insertionSort(numbers);
    printf("The sorted numbers are:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}