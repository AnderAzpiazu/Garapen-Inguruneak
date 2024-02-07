#include <stdio.h>

int main() {
    int menu;
    do {
        int aukera = 0;
        printf("\n");
        printf("---------------MENUA---------------\n");
        printf("1. Rombo\n2. Triangelua\n3. Piramide\n4. Karratu Hutsa\n0. Irten\n");
        printf("Aukeratu menu bat (0-4): ");
        scanf("%i", &menu);
        switch (aukera)
        {
        case 1:
            printf("\n");
            printf("\tRombo bat egin\n");
            erromboa();
            break;
        case 2:
            printf("\n");
            printf("\tRombo bat egin\n");
            rombo();
            break;
        case 3:
        printf("\n");
            printf("\tRombo bat egin\n");
            piramidea();
            break;
        case 4:
            printf("\n");
            printf("\tRombo bat egin\n");
            rombo();
            break;
        case 0:
            break;
        default:
            printf("\n");
            printf("\tBaliogabeko aukera. Saiatu berriz...");
            break;
        }
    } while (menu != 0);
    return 0;

    void rombo() {
        int altuera;
        int zabalera;
        printf("\t\tErromboaren altuera sartu");
    }


    void piramidea() {
    int altuera;  
    int zabalera; 
    
    printf("\t\tSartu piramidearen altuera(zenbaki positibo bakoitia): ");
    scanf("%i", &altuera);

    if (altuera > 0 && altuera % 2 != 0)
    {
        zabalera = (altuera * 2) - 1;
        printf("\n");
        for (int row = 1; row <= altuera; ++row)
        {
            for (int column = 1; column <= zabalera; ++column)
            {
                if ((column <= altuera && row + column >= altuera + 1) || (column > altuera && column - altuera < row && row >= 2))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n\t\tBaliogabeko tamaina.\n");
    }
}
void erronboa() 
{
    int altuera;
    int zabalera;

    printf("\t\tSartu erronboaren altuera, erronboa bertikalki dagoela jakinik (altuera zenbaki bakoiti osoa izan behar da (>=3)): ");
    scanf("%i", &altuera);

    if (altuera >= 3 && altuera % 2 != 0)
    {
        altuera = (altuera / 2) + 1;
        zabalera = (altuera * 2) - 1;

        for (int row = 1; row <= altuera; ++row)
        {
            for (int column = 1; column <= zabalera; ++column)
            {
                if ((column <= altuera && row + column >= altuera + 1) || (column > altuera && column - altuera < row && row >= 2))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        for (int row = 1; row < altuera; ++row)
        {
            for (int column = 1; column < zabalera; ++column)
            {
                if ((column <= altuera && column > row) || (column > altuera && row + (column - altuera) < altuera && row < altuera))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n\t\tBaliogabeko altuera.\n");
    }
}
}