#include <stdio.h>
#include <stdlib.h>

void main() {
    char name[20];
    int age;
    char gender;
    float income;

    printf("Enter <name> <age> <gender> <income>: ");
    scanf("%s %d %c %f", name, &age, &gender, &income);

    printf(
        "\n\n"
        "Name   : %s\n"
        "Age    : %d\n"
        "Gender : %c\n"
        "Income : %.2f\n",
        name, age, gender, income
    );

    system("pause");
}
