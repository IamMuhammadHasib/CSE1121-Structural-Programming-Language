#include<stdio.h>

int main(){
    int x = 10;
    int b = ++x;
    printf("%d %d ", b, x);
    int c = b--;
    printf("%d %d ",c, b);
    int a = --b+a++;
    printf("%d %d", a, c);

    return 0;
}
