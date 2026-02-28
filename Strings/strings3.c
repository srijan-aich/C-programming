#include<stdio.h>

int main(){

    char str[4]; // only 3 char, last one is for null terminator

    scanf("%s", str); // &str also works.
    // scanf automatically adds the null terminator at the end of the string.
    
    printf("%s\n", str);

    return 0;
}