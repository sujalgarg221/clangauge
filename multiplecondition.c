#include <stdio.h>
int main (){
    int n;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    if(n<99 && n>999){
        printf("NUMBER IS NOT 3 DIGIT");
    }
    else{
        printf("3 DIGIT NO");
}
        return 0;
}