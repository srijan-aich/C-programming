#include<stdio.h>
#include<string.h>

int main(){

    char st[] = "Srijan";

    printf("%d\n", strlen(st)); 
    
    /* strlen is used to find the length of the string. 
    It returns the number of characters in the string excluding the null terminator.*/
    
    char target[30];
    strcpy(target,st);

     /* strcpy is used to copy the string from st to target. 
    It also adds the null terminator at the end of the target string.*/

    printf("%s %s\n", st, target);

    return 0;

}

//excludes the null terminator in the count.