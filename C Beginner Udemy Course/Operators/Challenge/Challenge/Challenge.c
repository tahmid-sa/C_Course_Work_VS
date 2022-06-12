#include <stdio.h>

int main() {
    int minutes;

    double minsInYear = 365 * 24 * 60;
    double years;
    double days;

    scanf_s("%d", &minutes);

    years = minutes / minsInYear;
    days = minutes / (24 * 60);

    printf("Years: %f and days: %f\n", years, days);
}