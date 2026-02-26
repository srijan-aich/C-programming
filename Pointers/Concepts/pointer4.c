#include<stdio.h>

int main(){

    int i = 67;
    int* j = &i; // storing address of int i 
    int** k = &j; // it is storing address of address thus 2 stars, address of j ..
    // if we want to store address of k use 3 stars ...

    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);
    printf("the value of i is %d\n",*(&i)); // * and & gets cut thus i value
    printf("the value of i is %d\n",*(&j));
    printf("the value of i is %d\n",**(&j));
    printf("the address of j is %p\n",k);
    printf("the address of k is %p\n",&k);
    printf("the address of j is %p\n",*(&k));
    printf("the address of j is %p\n",**(&k));

    return 0;




}