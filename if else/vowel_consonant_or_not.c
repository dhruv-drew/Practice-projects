#include <stdio.h>
int main()
{
    char ch;
    printf("enter a char(a-z or A-Z) : ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        /* code */
        printf("the entered char is a vowel consonant.\n");
    }
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        /* code */
        printf("the entered char is a vowel consonant.\n");
    }
    else if (ch != 'a' || ch != 'e' || ch != 'i' || ch != 'o' || ch != 'u' || ch != 'A' || ch != 'E' || ch != 'I' || ch != 'O' || ch != 'U')
    {
        /* code */
        printf("the entered char is not a vowel consonant.\n");
    }

    else

    {
        printf("the value is incorrect");
    }

    return 0;
}