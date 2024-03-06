#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Charecter : ");
    scanf("%c",&ch);

    if (ch >= 'a' && ch<='z')
    {
        /* code */
        printf("The entered charecter is Lowecase");
    }
    else if (ch >='A' && ch <= 'Z')
    {
        /* code */
        printf("The entered charecter is Uppercase");
    }
    else{
        printf("The entered value is invalid");
    }
    
    return 0;
}