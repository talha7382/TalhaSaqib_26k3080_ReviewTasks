#include <stdio.h>

int main()
{
    float dist;
    int hour;
    float fare;

    printf("Enter the distance in km and hour of day.\n");
    scanf("%f %d", &dist, &hour);

    if (dist >= 1)
    {
        fare += 50;
        dist -= 1;
        int km = (int)dist;
        
        fare += 22 * km;
    }
    else if (dist <= 0)
    {
        printf("\nInvalid Distance\n");
        return 0;
    }

    if ((hour < 6) || (hour > 22))
    {
        fare += 40;
    }

    printf("\nYour fare is Rs. %.2f.", fare);

}
