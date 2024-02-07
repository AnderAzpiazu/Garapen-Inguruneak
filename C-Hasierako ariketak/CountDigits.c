#include <stdio.h>

int main() {
    int zenb, count = 0; // Int motako bariableak inizializatu

    printf("Sartu zenbaki bat: ");
    scanf("%d", &zenb);

    while (zenb != 0) { // Int bariablearen azkeneko zenbakia atera eta count-i 1 gehitu
        zenb /= 10;  
        count++;    
    }

    printf("Digitu guztien batura hau da: %d\n", count);

    return 0;
}
