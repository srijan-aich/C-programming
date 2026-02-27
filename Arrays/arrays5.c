#include<stdio.h>

int main() {
    int marks[] = {12,34,56};
    int* ptr = &marks[0]; //it stores address of first elemnt which is 12 here ...
    //int* ptr = marks   // works the same ...stores address of first element ...

    for(int i=0;i<3;i++){

        printf("The marks at index %d is %d\n",i,*ptr);
        ptr++;
    }


    return 0;


}