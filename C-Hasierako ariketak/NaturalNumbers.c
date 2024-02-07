#include <stdio.h>

int main() {
    int n, i, sum = 0;


    printf("Sartu 0 baino handiagoa den zenbaki bat: ");
    scanf("%d", &n);

    if (n <= 0) { // Zenbaki positiboa den ikusten du
        printf("Mesedez sartu 0 baino handiagoa den zenbaki bat: \n");
        return 1; 
    }

    for (i = 1; i <= n; i++) { // 1 etik 10 ra dauden zenbakiak gehituko ditu
        sum += i;
    }

    printf("1etik hasitako gehiketa %draino hau da %d\n", n, sum);

    return 0;
}
