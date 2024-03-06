// percentage >= 90% :grade A
// percentage >= 80% :grade B
// percentage >= 70% :grade C
// percentage >= 60% :grade D
// percentage >= 40% :grade E
// percentage < 40% :grade F

#include <stdio.h>
#include<math.h>

int main()
{
    float maths, pysics, english, chemestry, computer, percent;

    printf("Enter your maths mark :");
    scanf("%f", &maths);

    printf("Enter your pysics mark :");
    scanf("%f", &pysics);

    printf("Enter your english mark :");
    scanf("%f", &english);

    printf("Enter your chemestry mark :");
    scanf("%f", &chemestry);

    printf("Enter your computer mark :");
    scanf("%f", &computer);

    // maths =(maths%100)%100;
    // printf("%d", maths);

    percent = ((maths+pysics+chemestry+english+computer)/500)*100;
    // printf("%f",percent);

    if (percent >= 90)
    {
        /* code */
        printf("A");
    }
    else if (percent >= 80)
    {
        /* code */
        printf("B");
    }
    else if (percent >= 70)
    {
        /* code */
        printf("C");
    }
    else if (percent >= 60)
    {
        /* code */
        printf("D");
    }
    else if (percent >= 40)
    {
        /* code */
        printf("E");
    }
    else if (percent < 40)
    {
        /* code */
        printf("F");
    }
    
    else{
        printf("the value is invalid!\n");
    }
    
    return 0;
}