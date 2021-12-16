#include<stdio.h>
#include<conio.h>

struct Student_struct{
    int x;
    float y;
};

union Student_union{
    int x;
    float y;
};

int main(){
    struct Student_struct s1;
    union Student_union s2;

    printf("Struct\n");
    scanf("%d", &s1.x);
    printf("%d %f\n", s1.x, s1.y);

    scanf("%f", &s1.y);
    printf("%d %f\n", s1.x, s1.y);

    printf("\nUnion\n");
    scanf("%d", &s2.x);
    printf("%d %f\n", s2.x, s2.y);

    scanf("%f", &s2.y);
    printf("%d %f\n", s2.x, s2.y);

    return 0;
}
