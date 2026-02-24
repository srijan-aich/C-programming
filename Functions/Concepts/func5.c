#include <stdio.h>
#include <math.h>

double area_of_square(int side) {
    return pow(side, 2);
}

int main() {
    printf("The area of the square is %.2f\n", area_of_square(6));
    printf("The area of the square is %.2f\n", area_of_square(4));
    printf("The area of the square is %.2f\n", area_of_square(10));
    return 0;
}
