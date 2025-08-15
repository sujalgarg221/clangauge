#include <stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER ");
    scanf("%d",&n);
    if(n%2==0){
        printf("EVEN NUMBER");
    }
    if(n%2!=0){                  //  else{ printf("odd number")}
        printf("ODD NUMBER");
    }

    return 0;
}