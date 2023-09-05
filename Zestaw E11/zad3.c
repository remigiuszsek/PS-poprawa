#include <stdio.h>

enum DayOfWeek {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

void printDayOfWeek(enum DayOfWeek day)
{
    if (day == MONDAY) {
        printf("MONDAY\n");
    } 
    // itd.
}

int main()
{
    enum DayOfWeek day = MONDAY;
    printDayOfWeek(MONDAY);
    
    return 0;
}
