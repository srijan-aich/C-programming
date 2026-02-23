#include <stdio.h>

int main() {
    int n = 4;
    int product = 1;
    for(int i = 1; i<=n; i++){
        product = product * i;
    }
    printf("Factorial of %d = %d\n", n, product);
    return 0;
}