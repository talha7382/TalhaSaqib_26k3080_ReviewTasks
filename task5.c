#include <stdio.h>

int main()
{
    float load_amount, bonus;
    int network, is_wknd;

    printf("Enter the mobile load amount, \nNetwork code where 1 = Jazz, 2 = Telenor, and 3 = Ufone, "
            "\nAnd weekend status where 1 = weekend and 0 = weekday.\n");
    scanf("%f %d %d", &load_amount, &network, &is_wknd);

    if (load_amount < 100)
    {
        bonus = 0;
    }
    else if (load_amount < 500)
    {
        if (is_wknd)
        {
            if (network == 3)
            {
                bonus = 0.05 * load_amount;
            }
            else if (network == 1 || network == 2)
            {
                bonus = 0.1 * load_amount;
            }
        }
        else
        {
            bonus = 0.05 * load_amount;
        }
    }
    else
    {
        if (network == 1 || !is_wknd)
        {
            bonus = 0.2 * load_amount;
        }
        else
        {
            bonus = 0.12 * load_amount;
        }
    }
    load_amount += bonus;
    printf("Load Amount is Rs.%.1f.\nBonus is Rs.%.1f.", load_amount, bonus);
}
