#include <stdio.h>
int main () {
    int zenb;
    printf("Sartu zenbaki bat: ");
    scanf("%i", &zenb);
    if(zenb %2==0) // Zenbakia bikoitia bada hondarra 0 izango da
    {
        printf("Zenbakia bikoitia da");
    }
    else
    {
        printf("Zenbakia bakoitia da");
    }
return 0;
}