#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    // int arr[n]; // Not allowed in c
    ptr[0] = 3; 
    printf("%d\n", ptr[0]);
    ptr[1] = 6;
    printf("%d\n", ptr[1]);
    free(ptr);
    return 0;
}