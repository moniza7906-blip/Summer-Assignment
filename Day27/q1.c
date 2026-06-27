#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i;

    do {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].rollNo);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Record Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\nStudent Records:\n");
                    for(i = 0; i < n; i++) {
                        printf("\nRoll No: %d", s[i].rollNo);
                        printf("\nName: %s", s[i].name);
                        printf("\nMarks: %.2f\n", s[i].marks);
                    }
                }
                break;

            case 3: {
                int roll, found = 0;

                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                for(i = 0; i < n; i++) {
                    if(s[i].rollNo == roll) {
                        printf("\nRecord Found:\n");
                        printf("Roll No: %d\n", s[i].rollNo);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Record Not Found!\n");

                break;
            }

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}