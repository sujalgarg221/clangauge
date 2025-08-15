#include <stdio.h>
int main(){
    int n;
    printf("ENTER PERCENTAGE ");
    scanf("%d",&n);
    if(n>91 && n<100){
        printf("A+");
    }
        if(n>81 && n<91){
        printf("B");
    }
        if(n>71 && n<81){
        printf("C");
    }
        if(n>61 && n<71){
        printf("D");
    }
        if(n>51 && n<61){
        printf("E");
    }
        if(n>0 && n<50){
        printf("FAIL");
    }
    return 0;
}