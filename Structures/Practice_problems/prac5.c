#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} Complex;

void display(Complex c)
{
    printf("The value of Complex number is %d + %di \n", c.real, c.imaginary);
}
int main()
{
    
        printf("Enter real part \n");
        scanf("%d", &c.real);
        printf("Enter imaginary part \n");
        scanf("%d", &c.imaginary);
        display(c);

    return 0;
}