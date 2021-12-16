#include<stdio.h>

void add_int(int n);
int x, p, q;

int main(){
    int p, q = 200, x = 20;
    printf("%d %d %d\n", x, p, q);
    add_int(x);
    printf("%d %d %d", x, p, q);

    return 0;
}

void add_int(int x){
    x = 50;
    p = 200;
    q = 300;
}
