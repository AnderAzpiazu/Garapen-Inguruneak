/*
Zenbaki bat sartu eta bistaratu pantailan
*/
#include <stdio.h>
// char ... --> bariablea sortzeko, %c --> karaktereak sartzeko
int main() //int argc, char*argv[] --> jartzekotan dana jarri!!! ze argumento mota dian zehazten du
{
    int zenb1,zenb2;
    printf("Sartu zenbaki bat: "); // \r\n --> break line , \t --> tabulatzailea , \\ --> \ karakterea erakusten du , \\\\ --> \\ karaktereak erakusten ditu
    scanf("%d %d",&zenb1,&zenb2); // %d edo %i jarrita zenbaki bat irakurriko du, & non gordetzen den zehazteko balio du. %d",&zenb bariablea irakurtzeko
    printf("Zuk sartutako zenbakiak honako hauek dira: %d %d\n",zenb1, zenb2); // \" --> " , \' --> '
    return 0;
}

