#include<stdio.h>

int main(){
    int rx, ry, gx, gy, bx, by;
    scanf("%d %d %d %d %d %d", &rx,&gx,&bx,&ry,&gy,&by);

    int w = (rx-ry)*7+(gx-gy)*5+(bx-by)*3;
    if(w>0){
        printf("1st year");
    }
    else{
        printf("2nd year");
    }

    return 0;
}
