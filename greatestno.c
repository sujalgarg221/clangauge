#include <stdio.h>
int main(){
    int a,b,c;
    printf("VALUE OF A ");
    scanf("%d",&a);
    printf("VALUE OF B ");
    scanf("%d",&b);
    printf("VALUE OF C ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("A WINNER");
    }
    if(b>a && b>c){
        printf("B WINNER");
    }
    if(c>b && c>b){
        printf("C WINNER");
    }

    return 0;
}