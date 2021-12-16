#include<stdio.h>

int main(){

    int num[11] = {5,10,15,20,30,35,40,45,50,0};
    int i=0, sum=0;
    while(num[i%11]){
        sum = sum+num[i];
        printf("%d ", num[i]);
        i = i+1;
    }
    printf("%d", sum);

    //printf("\n%d", 5%5);

    return 0;

}
