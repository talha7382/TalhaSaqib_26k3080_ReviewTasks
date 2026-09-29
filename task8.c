#include <stdio.h>

int main()
{
    int meal_type, customer_type;
    float bill, service_charge, discount;

    printf("Enter Meal Category (1 = Fast Food, 2 = Desi Food, and 3 = Chinese),"
           "\nEnter 1 if you are a Student and 2 if Regular,"
           "\nAnd finally your bill amount.\n");
    scanf("%d %d %f", &meal_type, &customer_type, &bill);


    if ((customer_type < 1 || customer_type > 2) || (meal_type < 1 || meal_type > 3))
    {
        printf("Invalid Input.");
        return 0;
    }

    switch (meal_type)
    {
        case 1:
            service_charge = 0.05 * bill;
            break;
        case 2:
            service_charge = 0.08 * bill;
            break;
        case 3:
            service_charge = 0.10 * bill;
            break;
    }

    if (bill > 1000)
    {
        if (customer_type == 1)
        {
            discount = 0.15 * bill;
        }
        else if (customer_type == 2)
        {
            discount = 0.10 * bill;
        }
    }
    else
    {
        if (customer_type == 1)
        {
            discount = 0.05 * bill;
        }
        else if (customer_type == 2)
        {
            discount = 0;
        }
    }

    float final_bill = bill + service_charge - discount;
    printf("Service Charge: Rs. %.2f.\nDiscount: Rs. %.2f.\nFinal Payable Amount: Rs. %.2f.",
        service_charge, discount, final_bill);

}
