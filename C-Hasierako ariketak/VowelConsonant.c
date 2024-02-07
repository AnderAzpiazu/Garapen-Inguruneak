#include <stdio.h>

int main() {
    char karakterea;

    printf("Sartu karaktere bat: ");
    scanf(" %c", &karakterea); 

    switch (karakterea) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c bokala da.\n", karakterea);
            break;
        default:
            printf("%c kontsonantea da.\n", karakterea);
    }

    return 0;
}
