#include <stdio.h>
int main()
{
    int val_1, val_2,val_3;

    printf("enter the first value :");
    scanf("%d", &val_1);

    printf("enter the second value :");
    scanf("%d", &val_2);

    printf("enter the third value :");
    scanf("%d", &val_3);

    if (val_1 > val_2 && val_1>val_3)
    {
        /* code */
        printf("The %d number is Maximaum between three of this.\n", val_1);
    }
    else if (val_2 > val_1 && val_2>val_3)
    {
        /* code */
        printf("The %d number is maximum between three of this.\n",val_2);
    }
    else if (val_3 > val_1 && val_3>val_2)
    {
        /* code */
        printf("The %d number is maximum between three of this.\n",val_3);
    }
    else
    {
        printf("The entered value is invalid.\n");
    }

    return 0;
}