#include <stdio.h>
int main(){
    int l;
    printf("ENTER LENGTH");
    scanf("%d",&l);
    int b;
    printf("ENTER BREADH");
    scanf("%d",&b);
    int p = 2 *(l+b);
    int a = l *b;
    if(a<p){
        printf("PERIMETER");
    }
    else{
        printf("AREA");
    }


    return 0;
}