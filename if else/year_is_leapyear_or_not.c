#include<stdio.h>
int main(){
    int year;
    printf("enter the year :");
    scanf("%d",&year);

    if (year%4==0 && year>0)
    {
        /* code */
        printf("the year you enteres is a leap year.\n");
    }
    else if (year%4!=0 && year>0)
    {
        /* code */
        printf("The year you entered is not a leap year.\n");
    }
    else{
        printf("the value is invalid.\n");
    }
    

    return 0;
    
}