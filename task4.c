#include <stdio.h>

int main()
{
    int capacity, water_level;
    float fill_rate;

    printf("Enter tank capacity in liters,\nthe current water level in liters,\n"
            "and the motor fill rate in liters per minute.\n");
    scanf("%d %d %f", &capacity, &water_level, &fill_rate);
    

    if (water_level >= capacity)
    {
        printf("\nTank Already Full");
    }
    int liters_req = (capacity - water_level);
    float exact_time = (float)(liters_req / fill_rate);
    int billed_minutes = (int)(exact_time + 0.999999);
    float electric_cost = billed_minutes * 3.5;

    printf("Required time: %.2f mins,\nElectric Bill: $%.2f.", exact_time, electric_cost);
}
