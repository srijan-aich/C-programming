#include <stdio.h> 

int main() {
    //char str[] = {'a', 'b', 'c', '\0'};

    char st[] = "abc"; /* This is a string literal. 
    It automatically adds the null terminator at the end of the string. does the same
    thing as the above array initialization.
    */

    printf("The first character is %c\n",st[0]);

    for(int i = 0; i < 3; i++){
        printf("The character at index %d is %c\n", i, st[i]);
    }

    return 0;
}

