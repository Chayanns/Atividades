#include <stdio.h>


int main() {
    char sentence[] = "data : 06-06-2012";
    char str[50];
    int day, month, year;


    sscanf(sentence, "%s : %2d-%2d-%4d", str, &day, &month, &year);




    printf("Day: %d\n", day);
    printf("Month: %d\n", month);
    printf("Year: %d\n", year);


    return 0;
}
