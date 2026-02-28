#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Ij!uifsf!Xfmdpnf!up!uif!xpsme!pg!D!qsphsbnnjoh/";
    for (int i = 0; i < strlen(str); i++)
    {
       str[i] = str[i] - 1;
    }

    printf("%s", str);
    
    return 0;
}