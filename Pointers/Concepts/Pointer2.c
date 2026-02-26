#include<stdio.h>

int main(){
    char i = 'A';
    char*j = &i; //to store address of a char we need a char j ...
    float k = 89;
    float *k1 = &k;  // pointer to float (was: float k1 = &k)

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", (void *)j);
    printf("The address of k is %p\n", (void *)&k);

    printf("The value at j (char) is %c (ASCII %d)\n", *j, *j);
    printf("The value at k1 (float) is %f\n", *k1);
    printf("The address of j is %p\n", (void *)&j);

    



    return 0;

}