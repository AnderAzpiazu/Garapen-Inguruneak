/*
Erabiltzaieak karaktere bat sartuko duen eta karaktere honen ascii kodea erakutsiko duena 
*/ 

#include <stdio.h>

int main()
{
    char Karakterea;
    printf("Sartu karaktere bat: ");
    scanf("%c",&Karakterea);
    printf("Zuk sartutako karakterea \"%c\"-aren Ascii kodea: %i da",Karakterea,Karakterea);
    return 0;
}