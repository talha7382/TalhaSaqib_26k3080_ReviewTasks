#include <stdio.h>

int main()
{
    int overdue_days, book_type, has_priority;
    float cost;
    printf("Enter Book type. 1 is Regular, 2 is Reference, and 3 is Rare,\n"
            "Do you have priority membership? 1 for yes and 0 for no.\n"
            "How many days are you overdue?\n"
    );
    scanf("%d %d %d", &book_type, &has_priority, &overdue_days);

    switch (book_type)
    {
        case 1:
            if (overdue_days >= 7)
            {
                overdue_days -= 7;
                cost += 35 + overdue_days * 10;
            }
            else
            {
                cost += overdue_days * 5;
            }
            break;
        case 2:
            cost += overdue_days * 15;
            break;
        case 3:
            cost += 30 * overdue_days;
            if (overdue_days > 10)
            {
                printf("\nBanned from borrowing.");
            }
            break;
    }

    if (has_priority && book_type != 3)
    {
        cost *= 1 - 0.20;
    }

    printf("The Fine is Rs. %.2f.", cost);

}
