#include <stdio.h>

int main(){

    int a = 10;


    for (int i = 1; i <= 15; i++){

        a = a - 1;  // a--;
        if (a < 0){
            printf("a is negative, a = %d\n", a);
        }else if (a == 0){
            printf("a is zero\n");
        }else{
            printf("a is positive, a = %d\n", a);
        }


    }

    // printf("At last, a = %d\n", a);

    return 0;
}