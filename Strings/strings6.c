#include<stdio.h>
#include<string.h>

int main(){

    char st1[44] = "Believe me ";
    char st2[44] = " Srijan is a nice guy";

    strcat(st1, st2); // concatenates st2 to st1. It also adds the null terminator at the end of the concatenated string.
    printf("%s\n",st1);

    int a = strcmp("far", "joke");
    printf("%d\n", a);
    
    /* strcmp is used to compare two strings.
    It returns 0 if the strings are equal,
    a positive value if the first string is greater than the second string, 
    and a negative value if the first string is less than the second string. */

    return 0;
}   













