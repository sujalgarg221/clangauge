#include <stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER ");
    scanf("%d",&n);
    if(n%5==0){
        printf("DIVISIBLE BY 5");
    }
    else{
        printf("NOT DIVISBLE BY 5");
    }

    return 0;
}