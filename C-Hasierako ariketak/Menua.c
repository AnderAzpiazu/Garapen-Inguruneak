#include <stdio.h>

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Zatiketa bat ezin da egin 0-rekin.\n");
        return 0;
    }
}

int main()
{
    int choice;
    double num1, num2, result;

    while (1)
    {
        printf("\nMenua:\n");
        printf("1. Gehiketa\n");
        printf("2. Kenketa\n");
        printf("3. Biderketa\n");
        printf("4. Zatiketa\n");
        printf("0. Exit\n");
        printf("Aukeratu zenbaki bat (1-5): ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("Kalkulagaiutik ateratzen, agur!\n");
            break;
        }

        printf("Lehenengo zenbakia: ");
        scanf("%lf", &num1);
        printf("Bigarren zenbakia: ");
        scanf("%lf", &num2);

        switch (choice)
        {
        case 1:
            result = add(num1, num2);
            break;
        case 2:
            result = subtract(num1, num2);
            break;
        case 3:
            result = multiply(num1, num2);
            break;
        case 4:
            result = divide(num1, num2);
            break;
        default:
            printf("Zenbaki okerra berriz sartu: \n");
            continue;
        }

        printf("Erantzuna: %lf\n", result);
    }

    return 0;
}
