#include <stdio.h>
int main(){
    int x = 6;
    int y = x--;
    int z = --x;

    printf("%d%d%d",x,y,z);

    return 0;
}