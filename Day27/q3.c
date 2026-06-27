#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i;

    do {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Calculate Salary\n");
        printf("3. Display Employee Details\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basicSalary);

                n++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No employee records found.\n");
                } else {
                    for(i = 0; i < n; i++) {
                        emp[i].hra = emp[i].basicSalary * 0.20;
                        emp[i].da = emp[i].basicSalary * 0.10;
                        emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
                    }
                    printf("Salary Calculated Successfully!\n");
                }
                break;

            case 3:
                if(n == 0) {
                    printf("No employee records available.\n");
                } else {
                    printf("\nEmployee Salary Details:\n");
                    for(i = 0; i < n; i++) {
                        printf("\nEmployee ID : %d", emp[i].id);
                        printf("\nName        : %s", emp[i].name);
                        printf("\nBasic Salary: %.2f", emp[i].basicSalary);
                        printf("\nHRA         : %.2f", emp[i].hra);
                        printf("\nDA          : %.2f", emp[i].da);
                        printf("\nGross Salary: %.2f\n", emp[i].grossSalary);
                    }
                }
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}