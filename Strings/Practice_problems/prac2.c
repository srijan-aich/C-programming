#include <stdio.h>

int myStrlen(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char str[] = "Hello bro";
    printf("%d", myStrlen(str));
    return 0;
}