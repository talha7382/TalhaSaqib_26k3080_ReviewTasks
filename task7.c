#include <stdio.h>

int main()
{
    float batting_avg;
    int matches, not_fit;

    printf("Enter your batting average in 2dp, \nMatches played, \nAnd your fitness failure status "
        "where 1 means failed and 0 means passed.\n");
    scanf("%f %d %d", &batting_avg, &matches, &not_fit);

    if (matches < 5)
    {
        printf("\nRejected - Insufficient Matches.");
    }
    else if (batting_avg >= 35 && matches >= 10)
    {
        printf("\nSelected");
    }
    else if (batting_avg > 25 && matches >= 20)
    {
        if (!not_fit)
        {
            printf("\nSelected (Experience Quota)");
        }
        else
        {
            printf("\nRejected - Fitness.");
        }
    }
    else
    {
        printf("\nNot Selected");
    }

}
