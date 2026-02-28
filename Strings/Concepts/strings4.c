#include<stdio.h>

int main() {

    char st[20];
    fgets(st, sizeof(st), stdin); // the entered string is stored in str

    //printf("%s",st); 

    puts(st); // prints the string and adds a newline character at the end.
    printf("how are you?");


    return 0;

}
