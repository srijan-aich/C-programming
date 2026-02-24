#include <stdio.h>

int sum(int, int);
int sum( int x, int y){
    printf("the sum is %d\n", x+y);
    return x+y;
}
int main() {
    int a = 12;
    int b= 93;
    sum(a,b);

    int f= 94;
    int d= 93;
    sum(f,d);

    int t =32;      //t is a variable of type int
    int e=23;
    sum(t,e);

    return 0;

}