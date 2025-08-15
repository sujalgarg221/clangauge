#include <stdio.h>
int main(){
    int sp;
    printf("SELLING PRISE ");
    scanf("%d",&sp);
    int cp;
    printf("COST PRISE ");
    scanf("%d",&cp);
    if(sp>cp){
        printf("PROFIT");
    }
    else if(cp>sp){
        printf("LOSS");
    }
    else{
        printf("NULL");
    }
    return 0;
}