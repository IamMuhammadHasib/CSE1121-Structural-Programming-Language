#include<stdio.h>

int x,y;

void fun(int a, int p, int q[]){
    int x;
    a=100; p=200;
    q[1]=q[1]+2;
    q[2]=q[2]+2;
    x=102;
    y=202;
}

int main(){
    int a, b, c[3];
    a=10; b=20; c[1]=1; c[2]=2;
    x=100; y=200;
    printf("Before %d %d %d %d %d %d\n", a, b, c[1], c[2], x, y);
    fun(a, b, c);
    printf("After %d %d %d %d %d %d\n", a, b, c[1], c[2], x, y);

    getch();
}
