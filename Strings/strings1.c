#include <stdio.h> 

int main() {
    char str[] = {'a', 'b', 'c', '\0'};
    for(int i = 0; i < 3; i++){
        printf("The character at index %d is %c\n", i, str[i]);
    }

    return 0;
}