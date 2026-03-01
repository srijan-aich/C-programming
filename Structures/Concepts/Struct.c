#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    float salary;
}; // semicolon is required after the closing brace of the structure definition

int main(){ 
    struct employee e1,e2;
    printf("Enter employee 1 details (id name salary): ");
    scanf("%d %s %f", &e1.id, e1.name, &e1.salary);
    printf("Enter employee 2 details (id name salary): ");  
    scanf("%d %s %f", &e2.id, e2.name, &e2.salary);

    printf("\nEmployee 1 Details:\n");
    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);
    printf("\nEmployee 2 Details:\n");
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);
    return 0;

}