            // Write a function to print names of students whose grade is greater than 5


#include <stdio.h>

#define SIZE 100


struct Student {
    char name[50];
    float grade;
};

void printStudents(struct Student s[], int n) {
    int i;
    printf("\nStudents having grade greater than 5.0:\n");

    for(i = 0; i < n; i++) {
        if(s[i].grade > 5.0) {
            printf("%s\n", s[i].name);
        }
    }
}

int main() {
    struct Student s[SIZE];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter grade: ");
        scanf("%f", &s[i].grade);
    }


    printStudents(s, n);

    return 0;
}
