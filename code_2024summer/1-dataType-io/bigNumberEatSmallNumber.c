#include<stdio.h>
 
int main() {
    float sum = 0.0;
    float x = 1.0;
    for (int i = 0; i < 30000000; i++) {
       sum += x;
    }
    printf("%1.10f\n", sum);
    return 0;
}