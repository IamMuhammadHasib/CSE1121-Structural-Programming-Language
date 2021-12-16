#include<stdio.h>

int main(){
    freopen("\cQS2015 7b data.txt", "r", stdin);
    freopen("\cQS2015 7b output.txt", "w", stdout);

    int mat[5][5];
    int sum[5]={0};
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &mat[i][j]);
            sum[i] = sum[i]+mat[i][j];
        }
        printf("%d\n", sum[i]);
    }
}
