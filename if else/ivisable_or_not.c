#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    if (num % 5 ==0 && num % 11 ==0)
    {
        /* code */
        printf("The number is divisable with 5 and 11.\n");
    }
    else if (num%5!=0 && num%11!=0)
    {
        /* code */
        printf("the number is not divisable with 5 and 11.\n");
    }
    else{
        printf("the entered value is invalid.\n");
    }

    return 0;
    
    
}