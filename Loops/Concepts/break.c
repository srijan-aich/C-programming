#include<stdio.h>

int main() {
    int n;
    for(int i=0;i<10;i++)
        {
            if(i==5){
                //break; //exit the loop
                continue; //skip the current iteration and continue with the next iteration skips 5

        }
        printf("the value of i is %d\n",i);
    }
    return 0;
}
