#include <stdio.h>
int main(){
    int sp;
    printf("ENTER SP ");
    scanf("%d",&sp);
    int cp;
    printf("ENTER CP ");
    scanf("%d",&cp);
    if(sp>cp){
        printf("PROFIT");
    }
    if(cp>sp){
        printf("loss");
    }

    return 0;
}