#include <stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER ");
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++){
        if(n%i==0){
            printf("COMPOSITE NUMBER ");
            break;
         }
    }
    return 0;
}