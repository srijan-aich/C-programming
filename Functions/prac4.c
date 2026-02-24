#include<stdio.h>

int fibonacci(int);
int fibonacci(int n){
    if(n==1 || n==2){
        return (n-1); 
    }
    return fibonacci (n-1) + fibonacci(n - 2);
}

int main() {
    int n = 4;
    printf("The Value of Fibonacci series of %d is %d",n,fibonacci(n));
    return 0;
}