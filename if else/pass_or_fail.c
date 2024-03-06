# include <stdio.h>

int main(){
    int marks;
    printf("Enter the Marks (0-100) : ");
    scanf("%d",&marks);

    // normal is else coditional thing

    if (marks<30)
    {
        /* code */
        printf("Fail\n");
    }
    else if (marks>=30 && marks<=100)
    {
        /* code */
        printf("Pass\n");
    }
    
    else{
        printf("Wrong Input\n");
    }

    // this is an exampal of a turnary oparator where you can check only one statement at a time and can't have many statements in one
    marks <=30 ? printf("fail\n") : printf("pass\n");

    return 0;
    
}