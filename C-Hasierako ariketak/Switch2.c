#include <stdio.h>

int main() {
	
	int a;
	
	printf("Enter a number between 1 and 7: ");
	scanf("%i",&a);
	
	switch (a) {
		
		case 1:
			printf("Is monday");
			break;
			
		case 2:
			printf("Is tuesday");
			break;
			
		case 3:
			printf("Is wednesday");
			break;
			
		case 4:
			printf("Is thursday");
			break;
			
		case 5:
			printf("Is friday");
			break;
			
		case 6:
			printf("Is saturday");
			break;
			
		case 7:
			printf("Is sunday");
			break;
			
		default:
			printf("Invalid input");
			
		return 0;
	}
}
