#include <stdio.h>

struct student{
    int Rollno;
    char Name[20];
    char Department[40];
    int Yearofjoining;
    float score;

};
int main()
{
    struct student s1;
    printf("enter student info:");
    scanf("%d %s %s %d %f",&s1.Rollno,&s1.Name,&s1.Department,&s1.Yearofjoining,&s1.score);

    printf("%d %s %s %d %.2f",s1.Rollno,s1.Name,s1.Department,s1.Yearofjoining,s1.score);


    return 0;
}
