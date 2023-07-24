#include <stdio.h>
#include <stdlib.h>

void main() {
	printf("One\tTwo\tThree\n");
	printf("Orange, my favourite fruit.\rBanana\n");
	printf("I am only 26\b\b18.\n");
	printf("This create a beep.\a\n");
	printf("This part is shown.\0This part is gone.");
	printf("\nThese are \'single quotes\'.\n");
	printf("These are \"double quotes\".\n");
	printf("And this is \\ the backward slash.\n");

	/*
		\t is tab character
		\n is new line character
		\r is carriage return, it moves the cursor to the front of the line, and following character overrides
		\b is backspace
		\a is alarm, it creates a beep sound in c
		\0 is null, printf will always add null char as last character to show termination of the string.
		\' is to use ' as character instead of treating it as syntax.
		\" is to use " as character instead of treating it as syntax.
		\\ is to use \ as character instead of treating it as syntax
	*/

	system("pause");
}