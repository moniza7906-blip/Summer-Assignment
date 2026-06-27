#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks1, marks2, marks3;
    float total, percentage;
};

int main() {
    struct Student s;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Marks in Subject 1: ");
    scanf("%f", &s.marks1);

    printf("Enter Marks in Subject 2: ");
    scanf("%f", &s.marks2);

    printf("Enter Marks in Subject 3: ");
    scanf("%f", &s.marks3);

    s.total = s.marks1 + s.marks2 + s.marks3;
    s.percentage = s.total / 3;

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll No      : %d\n", s.rollNo);
    printf("Name         : %s\n", s.name);
    printf("Subject 1    : %.2f\n", s.marks1);
    printf("Subject 2    : %.2f\n", s.marks2);
    printf("Subject 3    : %.2f\n", s.marks3);
    printf("Total Marks  : %.2f\n", s.total);
    printf("Percentage   : %.2f%%\n", s.percentage);

    if(s.percentage >= 90)
        printf("Grade        : A+\n");
    else if(s.percentage >= 80)
        printf("Grade        : A\n");
    else if(s.percentage >= 70)
        printf("Grade        : B\n");
    else if(s.percentage >= 60)
        printf("Grade        : C\n");
    else if(s.percentage >= 50)
        printf("Grade        : D\n");
    else
        printf("Grade        : F\n");

    return 0;
}