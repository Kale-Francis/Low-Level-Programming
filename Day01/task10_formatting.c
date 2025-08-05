#include <stdio.h>

int main(){
    char book1[] = "Harry potter";
    int harry_year = 1997;
    float harry_rating = 4.9;
    char book2[] = "48 Laws of Power";
    int power_year = 1998;
    float power_rating = 4.1;
    char book3[] = "The Art of War";
    int art_year = 5;
    float art_rating = 4.0;

    printf("My favourite 3 Books of all time plus their publication date and their rating are %s, %d, %.1f, %s, %d, %.1f %s, %dth century BC, %.1f.\n", book1, harry_year, harry_rating, book2, power_year, power_rating, book3, art_year, art_rating);

    return 0;
}