#include<stdio.h>
int main() {
    int marks1, marks2, marks3;
printf("enter marks1:");
scanf("%d",&marks1);
printf("enter marks2:");
scanf("%d",&marks2);
printf("enter marks3:");
scanf("%d",&marks3);
if(marks1<33 || marks2<33 || marks3<33) {
    printf("You have failed\n");
}
else if((marks1 + marks2 + marks3)/3 < 40){
    printf("you have failed because of less percentage\n");
}
else{
    printf("you have passed\n");
}
return 0;
}