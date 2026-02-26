#include<stdio.h>

int main() {
    int i = 6;
    int* ptr = &i;
    printf("The address of i is %p\n",&i);
    printf("The value of i is %d\n",*ptr);
    printf("The value of i is %u\n",*(&i));

    return 0;

}