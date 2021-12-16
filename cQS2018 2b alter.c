#include<stdio.h>

int main(){
    int v[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i==j) v[i][j]=1;
            else v[i][j]=0;
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%3d", v[i][j]);
        }
        printf("\n");
    }
}
