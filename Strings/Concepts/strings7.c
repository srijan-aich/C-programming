#include<stdio.h>
#include<string.h>


int main() {

    int a = strcmp("deep", "down");
    printf("%d\n", a);
    
    /* strcmp is used to compare two strings.
    It returns 0 if the strings are equal,
    a positive value if the first string is greater than the second string, 
    and a negative value if the first string is less than the second string. */

    return 0;
}