
        //------Sort above data by score in descending order.--------//


#include <stdio.h>
#define SIZE 100

struct Student {
    char name[50];
    float grade;
};


void sortStudents(struct Student s[], int n) {
    int i, j;
    struct Student temp;

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(s[i].grade < s[j].grade) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void displayStudents(struct Student s[], int n) {
    int i;
    printf("\nStudents sorted by grade (descending):\n");
    for(i = 0; i < n; i++) {
        printf("%s - %.2f\n", s[i].name, s[i].grade);
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

    sortStudents(s, n);

    displayStudents(s, n);

    return 0;
}
