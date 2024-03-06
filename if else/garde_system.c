// marks < 30 =  C
// 30 < = marks < 70 B
// 70 < = marks < 90 A
// 90 < = marks < = 100 A+

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your makrs(0-100) : ");
    scanf("%d",&marks);

    if (marks < 30)
    {
        /* code */
        printf("Your garde is 'C'  \n");
    }
    else if (marks >=30 && marks < 70)
    {
        /* code */
        printf("Your grade is 'B'\n");
    }
    else if (marks >=70 && marks < 90)
    {
        /* code */
        printf("Your grade is 'A'\n");
    }
    else if (marks >=90 && marks <= 100)
    {
        /* code */
        printf("Your grade is 'A+'\n");
    }
    else{
        printf("The entered value is invalid!\n");
    }
    
    return 0;
}