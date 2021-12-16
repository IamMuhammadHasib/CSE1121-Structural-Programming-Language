#include<stdio.h>

int mat[10][10];
char bin[31][31];

void string_binary(int num){
    char st[30];
    int j=0;
    while(num){
        st[j]=num%2+'0';
        num=num/2;
        j++;
    }
    st[j]='\0';
    for(int i=j-1;i>=0;i--) printf("%c",st[i]);

}

int main()
{
    //freopen(filename,type,stdin);
    freopen("\cQS2018 4b in.txt","r",stdin);
    freopen("\cQS2018 4b out.txt","w",stdout);
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
            string_binary(mat[i][j]);
            printf(" ");
        }
        printf("\n");
    }


}

