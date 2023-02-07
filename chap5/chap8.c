#include<stdio.h>

int main () {
    char topping[24];

    int slices;
    int month, day, year;

    float price;

    printf("How many poizza in your area?\n");
    printf("(Input as $XX.XX\n)");
    scanf(" $%f", &price);

    printf("What your like topping (one word)\n");
    scanf(" %s", topping);

    printf("How match pizza slices with %s ");
    printf("you can eat once\n");
    scanf(" %d", &slices);

    printf("What date tuday? (Input date in format XX/XX/XX) \n");
    scanf(" %d/%d/%d", &month, &day, &year);

    printf

}