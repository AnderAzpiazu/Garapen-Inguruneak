#include <stdio.h>

int main() {
    double num1, num2;
    int choice;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    if (num1 > num2) {
        choice = 1; // num1 is greater
    } else if (num2 > num1) {
        choice = 2; // num2 is greater
    } else {
        choice = 0; // Both are equal
    }

    switch (choice) {
        case 1:
            printf("The maximum number is %.2lf\n", num1);
            break;
        case 2:
            printf("The maximum number is %.2lf\n", num2);
            break;
        case 0:
            printf("Both numbers are equal: %.2lf\n", num1);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
