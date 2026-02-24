#include<stdio.h>

float force(float);
float force(float mass){
    return (mass*9.8);
}

int main(){
    int m = 45;
    printf("The Force of mass %d is %f",m,force(m));
    return 0;
}