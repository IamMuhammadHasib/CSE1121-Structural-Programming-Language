#include<stdio.h>

int main(){
    int i=10, j=20;
    float a, b, c;
    a = i/j;
    b = 1.0 * i/j;
    c = i/j * 1.0;
    printf("%f %f %f", a, b, c);

    return 0;
}
