#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1;  // Leap year
            else
                return 0;  // Not a leap year
        } else {
            return 1;  // Leap year
        }
    } else {
        return 0;  // Not a leap year
    }
}

// Function to return number of days in a month
int daysInMonth(int month, int year) {
    switch(month) {
        case 1:  return 31;  // January
        case 2:  return (isLeapYear(year) ? 29 : 28);  // February
        case 3:  return 31;  // March
        case 4:  return 30;  // April
        case 5:  return 31;  // May
        case 6:  return 30;  // June
        case 7:  return 31;  // July
        case 8:  return 31;  // August
        case 9:  return 30;  // September
        case 10: return 31;  // October
        case 11: return 30;  // November
        case 12: return 31;  // December
        default: return -1; // Invalid month
    }
}

// Function to get month name
void getMonthName(int month, char *name) {
    switch(month) {
        case 1:  strcpy(name, "January"); break;
        case 2:  strcpy(name, "February"); break;
        case 3:  strcpy(name, "March"); break;
        case 4:  strcpy(name, "April"); break;
        case 5:  strcpy(name, "May"); break;
        case 6:  strcpy(name, "June"); break;
        case 7:  strcpy(name, "July"); break;
        case 8:  strcpy(name, "August"); break;
        case 9:  strcpy(name, "September"); break;
        case 10: strcpy(name, "October"); break;
        case 11: strcpy(name, "November"); break;
        case 12: strcpy(name, "December"); break;
    }
}

int main() {
    int month, year, days;
    char monthName[20];
    
    // Input month and year
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    
    // Validate input
    if (month < 1 || month > 12) {
        printf("Error: Invalid month! Please enter month between 1 and 12.\n");
        return 1;
    }
    
    if (year < 1) {
        printf("Error: Invalid year! Please enter a positive year.\n");
        return 1;
    }
    
    // Get number of days
    days = daysInMonth(month, year);
    getMonthName(month, monthName);
    
    // Display result
    printf("\n%s %d has %d days\n", monthName, year, days);
    
    // Additional information for February
    if (month == 2) {
        if (isLeapYear(year))
            printf("Note: %d is a leap year, so February has 29 days.\n", year);
        else
            printf("Note: %d is not a leap year, so February has 28 days.\n", year);
    }
    
    return 0;
}