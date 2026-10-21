#include <stdio.h>

struct Date
{
    int day, month, year;
};

struct Time
{
    int hour, minute, second;
};

struct Logger
{
    struct Date date;
    struct Time time;
};

int main()
{
    struct Logger log;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d",
          &log.date.day,
          &log.date.month,
          &log.date.year);

    printf("Enter time (HH MM SS): ");
    scanf("%d %d %d",
          &log.time.hour,
          &log.time.minute,
          &log.time.second);

    if(log.date.day >= 1 && log.date.day <= 31 &&
       log.date.month >= 1 && log.date.month <= 12 &&
       log.date.year > 0 &&
       log.time.hour >= 0 && log.time.hour <= 23 &&
       log.time.minute >= 0 && log.time.minute <= 59 &&
       log.time.second >= 0 && log.time.second <= 59)
    {
        printf("\nDate: %02d-%02d-%04d\n",
               log.date.day,
               log.date.month,
               log.date.year);

        printf("Time: %02d:%02d:%02d\n",
               log.time.hour,
               log.time.minute,
               log.time.second);
    }
    else
    {
        printf("Invalid date or time!\n");
    }

    return 0;
}