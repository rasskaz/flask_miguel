#include <stdio.h>

int main () {
    int first_initial, middle_initial;
    int number_of_pencils;
    int numbers_of_notebooks;
    float pencils = 0.23;
    float notebook = 2.89;
    float lunchbox = 4.99;

    first_initial = 'J';
    middle_initial = 'R';

    number_of_pencils = 7;
    numbers_of_notebooks = 4;

    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", first_initial, middle_initial,number_of_pencils,numbers_of_notebooks);
    printf("The total cist is $%.2f\n\n", number_of_pencils*pencils);
    

}