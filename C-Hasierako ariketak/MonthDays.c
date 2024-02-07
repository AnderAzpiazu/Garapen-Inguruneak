#include <stdio.h>

int main() {
    int hilabetea;
    printf("Hilabete bat aukeratu (1-12): ");
    scanf("%d", &hilabetea);

    switch (hilabetea) { // Switch case baten bidez hilabete ezberdinen egunak inprimatzen dira
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 egun\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 egun\n");
            break;
        case 2:
            printf("28 or 29 egun\n");
            break;
        default:
            printf("Hilabete honek ez du balio.\n");
    }

    return 0;
}