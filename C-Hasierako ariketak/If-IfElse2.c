#include <stdio.h>

int main() {
	
	char letra;
	
	printf("Enter a letter please: ");
	
	scanf("%c",&letra);
	
	if((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u') || (letra == 'A') || (letra == 'E') || (letra == 'I') || (letra == 'O') || (letra == 'U'))
	
		printf("The letter is vowel.");
		
	else
	
		printf("The letter is a consonant.");
		
	return 0;
}
