#include <stdio.h>

int main() {
    int urtea;
    printf("Sartu urte bat: ");
    scanf("%d", &urtea);
    if ((urtea % 4 == 0 && urtea % 100 != 0) || (urtea % 400 == 0)) { // Urte bisiestoa izatearen baldintza
        printf("%d Urte bisiesto bat da.\n", urtea);
    } else {
        printf("%d Ez da urte bisiesto bat da.\n", urtea);
    }

    return 0;
}
