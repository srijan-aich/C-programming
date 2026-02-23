#include <stdio.h>

int main() {
    int i = 1;
    int n = 4;
    int product = 1;
    while(i<=n){
        product = product * i;
        i++;
    }
    printf("Factorial of %d = %d\n", n, product);
    return 0;
}