#include <stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER ");
    scanf("%d",&n);
    int count =0;
    while(n!=0){
        n = n/10;
        count++;
    }
printf("THE NO OF DIGIT ARE %d",count);
return 0;
}