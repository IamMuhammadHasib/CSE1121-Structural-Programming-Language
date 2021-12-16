#include<stdio.h>
double getAverage(int balance[5], int v){
    double s = 0;
    for(int i=0; i<5; i++){
        s = s+balance[i];
    }
    return s/v;
}
int main(){
    int balance[5]={1000,2,3,17,50};
    double avg;
    avg = getAverage(balance, 5);
    printf("Average value is: %f", avg);

    return 0;
}
