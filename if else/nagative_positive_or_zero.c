#include<stdio.h>

int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);

    if (num==0)
    {
        /* code */
        printf("The number is zero");
    }
    else if (num>0)
    {
        /* code */
        printf("It is a positive number");
    }
    else if (num<0)
    {
        /* code */
        printf("It is a nagative number");
    }
    else{
        printf("The entered value is invalid!\n");
    }

    return 0;
    
    
}