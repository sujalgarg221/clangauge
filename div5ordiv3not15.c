#include <stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER ");
    scanf("%d",&n);
    if((n%5==0 || n%3==0) && n%15!=0 ){
        printf("CONDITION FULFILLED");
    }
    else{
        printf("CONDITION FAILED");
    }


    return 0;
}