#include<stdio.h>

int main(){
    int i=4, j;
    printf("%d %d ", ++i, i++);
    j = ++i * i++;
    i *= j;
    printf(" %d %d", j, i);

    return 0;
}

