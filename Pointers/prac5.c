#include<stdio.h>

int main() {
    int i = 6;
    int* ptr1 = &i;
    int** ptr2 = &ptr1;
    printf("The value of i is %d\n",*ptr1);
    printf("The value of i is %u\n",**ptr2); /* one star means value stored in ptr2 which is
address of ptr1 and another tells what value is stored in ptr1*/

    return 0;

}