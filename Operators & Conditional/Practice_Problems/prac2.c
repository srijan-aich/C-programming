#include<stdio.h>

int main() {
    int a,b,c,d;
    printf("enter the value of a,b,c,d:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("a is the greatest number\n");
    }
    else if(b>a && b>c && b>d){
        printf("b is the greatest number\n");
    }
    else if(c>a && c>b && c>d){
        printf("c is the greatest number\n");
    }
    else{
        printf("d is the greatest number\n");
    }
    return 0;
}
