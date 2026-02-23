#include <stdio.h>

int main() {
    int n = 6;
    int prime = 1;
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            prime = 0;
            break;
        }
    }
    if(prime == 1){
        printf("The number is prime\n");
    }
    return 0;
}
