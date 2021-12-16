#include<stdio.h>
int a=20, e;

int main(){
    int a=10, b=20;
    int c=0, d=0;
    printf("%d\n", a);

    c = sum(a,b);
    d = sub(a,b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);

    return 0;
}

int sum(int a, int b){
    printf("%d\n", a);
    printf("%d\n", b);
    return a+b;
}

int sub(int a, int b){
    int c=40;
    printf("%d\n", a);
    printf("%d\n", b);
    return a-b+c;
}
