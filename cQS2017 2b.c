#include<stdio.h>

int main(){
    int N;
    scanf("%d\n", &N);

    char c[250];
    gets(c);

    char q;
    scanf(" %c", &q);

    int i=0, count=0;
    while(c[i] != '\0'){
        if(c[i]==q){
            count++;
        }
        i++;
    }

    printf("%d", count);

    return 0;
}
