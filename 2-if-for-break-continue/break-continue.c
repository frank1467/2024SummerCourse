#include <stdio.h>

int main()
{
    int a = 10;

    for (int i = 0; i < 15; i++){
        a--;
        if (a < 0){
            printf("a is negative, a = %d\n", a);
            break;
        }else if (a > 0){
            printf("a is positive, a = %d\n", a);
            continue;
        }

        printf("a is zero\n");
    }
    printf("At last, a = %d\n", a);

    return 0;
}