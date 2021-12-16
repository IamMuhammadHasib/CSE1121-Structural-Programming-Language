#include<stdio.h>

int main(){
    FILE *fpr, *fpw;
    char line[200];
    int freq[123] = {0};

    fpr = fopen("\cQS2019 6b in.txt", "r");

    for(int i=0; i<2; i++){
        fgets(line, 40, (FILE*)fpr);

        int j=0;
        while(line[j] != '\0'){
            freq[line[j]]++;
            j++;
        }
        printf("%s", line);
    }
    fclose(fpr);

    printf("\n");

    fpw = fopen("\cQS2019 6b out.txt", "w");

    for(int k=65; k<91; k++){
        fprintf(fpw, "%c = %d, ", k, freq[k]);
    }

    fprintf(fpw, "\n");

    for(int l=97; l<123; l++){
        fprintf(fpw, "%c = %d, ", l, freq[l]);
    }

    fclose(fpw);

    return 0;
}
