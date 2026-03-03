
              //------Write a function to print data of all students who joined in 2019.

#include <stdio.h>
#include <string.h>

#define SIZE 100

struct Student {
    int rollNo;
    char name[50];
    int joinYear;
};

void printStudents2019(struct Student s[], int n) {
    int found = 0;
    printf("Students who joined in 2019:\n");

    for(int i = 0; i < n; i++) {
        if(s[i].joinYear == 2019) {
            printf("Roll No: %d\n", s[i].rollNo);
            printf("Name   : %s\n", s[i].name);
            printf("Year   : %d\n", s[i].joinYear);
            printf("----------------------\n");
            found = 1;
        }
    }

    if(!found) {
        printf("No students joined in 2019.\n");
    }
}

int main() {
    struct Student students[SIZE];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Joining Year: ");
        scanf("%d", &students[i].joinYear);
    }

    printStudents2019(students, n);

    return 0;
}
