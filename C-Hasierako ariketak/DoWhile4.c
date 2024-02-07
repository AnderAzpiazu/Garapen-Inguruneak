#include <stdio.h>

int main() {
    int n, i = 2;
    long long int first = 0, second = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("Fibonacci Series: %lld, %lld, ", first, second);

        do {
            long long int next = first + second;
            printf("%lld, ", next);
            first = second;
            second = next;
            i++;
        } while (i < n);
    } else {
        printf("Invalid input. Please enter a positive number of terms.");
    }

    printf("\n");

    return 0;
}
