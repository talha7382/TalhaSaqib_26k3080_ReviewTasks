#include <stdio.h>

int main()
{
    int marks;
    /*added this to have A+ in the variable because its two characters*/
    const char *grade;
    printf("enter your marks\n");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Invalid Marks");
    }
    else if (marks >= 90)
    {
        grade = "A+";
    }
    else if (marks >= 80)
    {
        grade = "A";
    }
    else if (marks >= 70)
    {
        grade = "B";
    }
    else if (marks >= 60)
    {
        grade = "C";
    }
    else if (marks >= 50)
    {
        grade = "D";
    }
    else
    {
        printf("\nYou Failed");
    }

    printf("Your grade is %s", grade);
    return 0;
}
