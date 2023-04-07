#include <stdio.h>

struct Time {
    unsigned int Hours;
    unsigned int Minutes;
    unsigned int Seconds;
    unsigned int Day;
    unsigned int Month;
    unsigned short Year; // using short to save 2 bytes
};

int main() {
    struct Time t;

    printf("Enter hours: ");
    scanf("%u", &t.Hours);
    printf("Enter minutes: ");
    scanf("%u", &t.Minutes);
    printf("Enter seconds: ");
    scanf("%u", &t.Seconds);
    printf("Enter day: ");
    scanf("%u", &t.Day);
    printf("Enter month: ");
    scanf("%u", &t.Month);
    printf("Enter year: ");
    scanf("%hu", &t.Year);

    printf("\nTime: %02u:%02u:%02u, Date: %02u/%02u/%hu\n", t.Hours, t.Minutes, t.Seconds, t.Day, t.Month, t.Year);
    printf("Size of Time struct: %lu bytes\n", sizeof(t));

    return 0;
}
