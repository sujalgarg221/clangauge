#include <stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER ");
    scanf("%d",&n);
    int sum =0;
    int lastdigit =0;

    while(n!=0){
        lastdigit = n%10;
        sum =sum+ lastdigit;
        n =n/10;
    }
printf("THE SUM OF DIGIT ARE %d",sum);
return 0;
}