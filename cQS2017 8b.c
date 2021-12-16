#include<stdio.h>

int y(int n);

int main(){
    int x;
    x=y(10);
    printf("Final Output = %d", x);

    return 0;
}

int y(int n){
    printf("The function is called with argument %d\n", n);

    if(n==0){
        printf("In Terminating Condition = %d\n", n);
        return n;
    }
    else{
        printf("In Recursive = %d\n", (n-2));
        return n+y(n-2);
    }

    printf("CSE %d Times\n", n);
}
