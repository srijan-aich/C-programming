#include <stdio.h>

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}
int main() {
    int a = 5, b = 9, c = 6;
    printf("the avg of a,b,c is %f",average(a,b,c));
    return 0;
}

