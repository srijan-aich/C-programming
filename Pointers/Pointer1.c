#include<stdio.h>

int main(){
    int i = 72;
    int*j = &i;
    int k = 89;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The address of k is %u\n",&k);

    printf("The value at address j is %d\n", *j);
    printf("The value at address i is %d\n", *(&i)); 
    printf("The address of j is %p\n", &j); 
    printf("The address of j is %p\n", *(&j)); 



    return 0;

}