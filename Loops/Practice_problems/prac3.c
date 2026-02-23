#include <stdio.h>

int main() {
    int n=10;
        int sum=0;
        for(int i=1; i<=n; i++){
            sum += i;
        }
        printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}