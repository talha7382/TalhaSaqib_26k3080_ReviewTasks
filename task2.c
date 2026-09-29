#include <stdio.h>

int main()
{
    float bill;
    int is_member = 0;
    float disc = 0;

    printf("Enter your total bill:\n$ ");
    scanf("%f", &bill);

    printf("\nEnter 1 if you are a member and 0 if you are not.\n");
    scanf("%d", &is_member);

    if (bill < 500)
    {
        printf("\nNo discount for you.\n");
    }
    else if (bill < 2000)
    {
        if (is_member)
        {
            disc = 0.1 * bill;
        }
        else
        {
            disc = 0.05 * bill;
        }
    }
    else
    {
        if (is_member)
        {
            disc = 0.15 * bill;
        }
        else
        {
            disc = 0.08 * bill;
        }
    }

    float final_bill = bill - disc;

    printf("Discount Amount: $%.2f.\nFinal Bill: $%.2f.", disc, final_bill);
} 
