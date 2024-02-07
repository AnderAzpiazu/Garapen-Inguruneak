#include <stdio.h>

int main() {
	
	int num;
	int i; 
	int a;
	
	do {
	printf("Enter a number please: ");
	scanf("%d",&num);
	
	printf("The factors of %i are: \n", num);
	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\nDo you want to try with another number? yes=1 no=0: ");
	scanf("%i",&a);
} 
	while (a == 1);
	return 0;
}
