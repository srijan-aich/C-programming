#include<stdio.h>

int main(){
    int marks[5];
    printf("The Marks of 5 students are:\n ");

    for(int i=0;i<5;i++){
        scanf("%d", &marks[i]);
        printf("The value at index %d is %d\n", i, marks[i]);
    
    }
    
    
        
    
    return 0;
}