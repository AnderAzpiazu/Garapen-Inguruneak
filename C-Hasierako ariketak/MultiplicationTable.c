#include <stdio.h>

int main() {
    int zenb, i;

    printf("Sartu zenbaki bat: ");
    scanf("%d", &zenb);

    printf("Biderketa taula honako ha da zenbaki honetarako %d:\n", zenb);
    for (i = 1; i <= 10; i++) { // 1etik 10ra inprimatuko du
        printf("%d x %d = %d\n", zenb, i, zenb * i); // i bariableak taula inprimitzeko erabiliko da 1-10 balioak hartuz
    }

    return 0;
}
