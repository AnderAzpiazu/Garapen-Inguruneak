#include <stdio.h>

int main() {
    double zenb1, zenb2, zenb3; // double motako bariablea izan behar da

    printf("Sartu hiru zenbaki: ");
    scanf("%lf %lf %lf", &zenb1, &zenb2, &zenb3);
    if (zenb1 >= zenb2 && zenb1 >= zenb3) { // Konprobatu ze zenbaki den handiago if else bidez
        printf("Zenbaki handiena hau da %0.lf\n", zenb1);
    }
    else if (zenb2 >= zenb1 && zenb2 >= zenb3) {
        printf("Zenbaki handiena hau da %0.lf\n", zenb2); //%.2lf\n bi decimal ateratzeko balio du
    }
    else {
        printf("Zenbaki handiena hau da %0.lf\n", zenb3);
    }

    return 0;
}
