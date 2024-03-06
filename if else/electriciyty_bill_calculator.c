#include<stdio.h>
int main(){
    float units;
    printf("Enter the units used this month :");
    scanf("%f",&units);

    if (units > 0 && units <= 50)
    {
        units *= 0.50;
        units = units+((units*20)/100);
        printf("the total bill of this month is %f$.\n",units);
    }
   
    else if (units > 50 && units <= 100)
    {
        units *= 0.75;
        units = units+((units*20)/100);
        printf("the total bill of this month is %f$.\n",units);
    }
    else if (units > 100 && units <= 200)
    {
        units *= 1.20;
        units = units+((units*20)/100);
        printf("the total bill of this month is %f$.\n",units);
    }
    else if (units > 200 && units <= 250)
    {
        units *= 1.50;
        units = units+((units*20)/100);
        printf("the total bill of this month is %f$.\n",units);
    }
    else if (units > 250)
    {
        units *= 1.70;
        units = units+((units*20)/100);
        printf("the total bill of this month is %f$.\n",units);
    }
    else{
        printf("the value is incorrect!\n");
    }
   
    

    return 0;
}