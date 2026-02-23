#include <stdio.h>

int main() {
    int n=10;
    int sum =0;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}