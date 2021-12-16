#include<stdio.h>

int main(){
    int *a, b = 30;
    a = &b;
    b = *a + 40;
    printf("%d %d", b, *a);
    a = b%5;
    printf("\n%d %d", b, *a);

    return 0;
}
