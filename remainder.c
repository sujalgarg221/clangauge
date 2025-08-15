#include <stdio.h>
int main(){
    int a,b;
    printf("ENTER VALUE OF A ");   // or int a,b 
    scanf("%d",&a);
    printf("ENTER VALUE OF B ");   // r= a%b 
    scanf("%d",&b);
    int q = a/b;
    int r = a-(b*q);
    printf("REMAINDER IS %d",r);

    return 0;
}