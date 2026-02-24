#include <stdio.h>

int sum(int, int);
int sum( int x, int y){
    return x+y;
}
int main() {
    int a = 12;
    int b= 93;
    int c = sum(a,b);
    printf("the sum is %d",c);

    return 0;   
}