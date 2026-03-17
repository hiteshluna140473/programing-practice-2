          //-----Demonstrate difference between structure and union.


#include <stdio.h>
#include <string.h>

// Structure definition
struct StudentStruct {
    int roll;
    float marks;
    char grade;
};

// Union definition
union StudentUnion {
    int roll;
    float marks;
    char grade;
};

int main() {
    struct StudentStruct s;
    union StudentUnion u;

    // Assign values to structure members
    s.roll = 101;
    s.marks = 85.5;
    s.grade = 'A';

    // Assign values to union members
    u.roll = 101;
    u.marks = 85.5;
    u.grade = 'A';

    printf("=== Structure ===\n");
    printf("Roll  : %d\n", s.roll);
    printf("Marks : %.2f\n", s.marks);
    printf("Grade : %c\n", s.grade);
    printf("Size of structure: %lu bytes\n\n", sizeof(s));

    printf("=== Union ===\n");
    printf("Roll  : %d\n", u.roll);
    printf("Marks : %.2f\n", u.marks);
    printf("Grade : %c\n", u.grade);
    printf("Size of union: %lu bytes\n", sizeof(u));

    return 0;
}
