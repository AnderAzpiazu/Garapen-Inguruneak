#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number

    do {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    } while (num != 0);

    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}
