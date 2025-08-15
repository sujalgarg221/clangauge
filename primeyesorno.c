#include <stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER ");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
         }
    }
    if(n==1) printf("1 IS UNIQUE NO");
    if(a==0) printf("PRIME");
    else printf("COMPOSITE");
    return 0;
}