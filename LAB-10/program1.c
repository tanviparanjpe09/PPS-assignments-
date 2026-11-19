#include <stdio.h>

int main() {
    int year;

    int month, day, startDay, i;

    // Days in each month
    int daysInMonth[] = {31, 28, 31, 30, 31, 30,
                         31, 31, 30, 31, 30, 31};

    // Month names
    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // Input year
    printf("Enter year: ");
    scanf("%d", &year);

    // Adjust February for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        daysInMonth[1] = 29;

    // Calculate day of week for 1 January of that year
    startDay = (year * 365 + (year - 1) / 4 - (year - 1) / 100
                + (year - 1) / 400) % 7;

    printf("\n*************** Calendar for %d ***************\n", year);

    for (month = 0; month < 12; month++) {

        printf("\n\n---------- %s %d ----------\n", months[month], year);

        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        // Print initial spaces before the 1st date
        for (i = 0; i < startDay; i++)
            printf("    ");

        // Print days
        for (day = 1; day <= daysInMonth[month]; day++) {

            printf("%4d", day);

            if ((startDay + day) % 7 == 0)
                printf("\n");
        }

        // Move to next line after printing month
        printf("\n");

        // Update start day for next month
        startDay = (startDay + daysInMonth[month]) % 7;
    }

    return 0;
}
