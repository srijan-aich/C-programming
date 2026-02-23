#include <stdio.h>

int main() {
    int i=5;
    printf("the value of i is %d\n",i);   
    i = i+5
    printf("the value of i is %d\n",i);
    i++;                                   //post increment
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",++i);     //pre increment
    printf("the value of i is %d\n",i++); 
    printf("the value of i is %d\n",i);    //post increment
    printf("the value of i is %d\n",--i);     //pre decrement
    printf("the value of i is %d\n",i--); 
    printf("the value of i is %d\n",i);    //post decrement
    i+=2;
    printf("the value of i is %d\n",i);
    return 0;
}