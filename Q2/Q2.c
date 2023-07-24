#include <stdio.h>
#include <stdlib.h>

void main() {
	printf("Enter the first character: ");
	char num1 = getchar();
	rewind(stdin);

	printf("\nEnter the second character: ");
	char num2 = getchar();
	rewind(stdin);

	printf("\nEnter the third character: ");
	char num3 = getchar();
	rewind(stdin);

	printf(
		"\n\nASCII value for character %c is %d\n"
		"ASCII value for character %c is %d\n"
		"ASCII value for character %c is %d",
		num1, num2, num3
	);
}