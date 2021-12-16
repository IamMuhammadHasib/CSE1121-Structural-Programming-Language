#include<stdio.h>

int main(){
    int a,b,c,d,*x,*y;
    a=15;
    x=&a;
    printf("%x %x %x %x\n", a, &a, x, *x);
    printf("%x %x\n", &x, *(&x));
    printf("%x %x\n", &a, *(&a));
    printf("%x %x\n", &(*(&a)), *(&(*(&a))));
    printf("%x %x\n", &(*(&x)), *(&(*(&x))));

    return 0;
}

