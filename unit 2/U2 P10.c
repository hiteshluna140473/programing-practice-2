
                      //Write a program to demonstrate nested structure

#include <stdio.h>

// Inner structure
struct Date {
    int day;
    int month;
    int year;
};

// Outer structure (contains Date structure)
struct Student {
    int rollNo;
    char name[50];
    struct Date dob;   // Nested structure
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);
    printf("Date of Birth: %02d/%02d/%d\n",
           s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
