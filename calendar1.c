#include <stdio.h>

int main()
{
    int day, month, year;
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    if ((month <= 0 || month > 12) || (day <= 0 || day > 31) || year < 0)
    {
        printf("Invalid Date\n");
        return 0;
    }
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day >= 1 && day <= 31))
    {
        printf("Valid Date\n");
    
        if (day >= 1 && day <= 30)
        {
            printf("Next Day: %d/%d/%d\n", day+1, month, year);
        }
        else if (day == 31 && month != 12)
        {
            printf("Next Day: %d/%d/%d\n", 1, month+1, year);
        }
        else if (day == 31 && month == 12)
        {
            printf("Next Day: %d/%d/%d\n", 1, 1, year+1);
        }
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        printf("Invalid Date\n");
        return 0;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && (day >= 1 && day <= 30))
    {
        printf("Valid Date\n");

        if (day >= 1 && day <= 29)
        {
            printf("Next Day: %d/%d/%d\n", day+1, month, year);
        }
        else if (day == 30)
        {
            printf("Next Day: %d/%d/%d\n", 1, month+1, year);
        }
    }
    if ((month == 2 && day > 29) || (month == 2 && (day == 29 && !(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))))
    {
        printf("Invalid Date\n");
        return 0;
    }
    if (((month == 2) && (day >= 1 && day < 29)) || (day == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))))
    {
        printf("Valid Date\n");

        if (day >= 1 && day <= 27)
        {
            printf("Next Day: %d/%d/%d\n", day+1, month, year);
        }
        else if (day == 28 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        {
            printf("Next Day: %d/%d/%d\n", day+1, month, year);
        }
        else if (day == 28 && !(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        {
            printf("Next Day: %d/%d/%d\n", 1, month+1, year);
        }
        else if (day == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        {
            printf("Next Day: %d/%d/%d\n", 1, month+1, year);
        }
    }
    return 0;
}