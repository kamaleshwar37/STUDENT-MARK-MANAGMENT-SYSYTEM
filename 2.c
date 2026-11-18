
#include <stdio.h>
#include <string.h>

int main() {
    int rollno, choice;
    float m1, m2, m3, m4, m5, avg, total;
    char name[50], grade[30], result[30];

    do {
        printf("STUDENT GRADE MANAGEMENT SYSTEM\n");
        printf("-------------------------------------\n");
        printf("1.Enter Student Details\n");
        printf("2.Calculate Result\n");
        printf("3.Display Result\n");
        printf("4.Exit\n");
        printf("Enter Choice:\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Roll Number:\n");
                scanf("%d", &rollno);

                printf("Enter Name:\n");
                scanf("%49s", name);

                printf("Enter Subject 1 Mark:\n");
                scanf("%f", &m1);

                printf("Enter Subject 2 Mark:\n");
                scanf("%f", &m2);

                printf("Enter Subject 3 Mark:\n");
                scanf("%f", &m3);

                printf("Enter Subject 4 Mark:\n");
                scanf("%f", &m4);

                printf("Enter Subject 5 Mark:\n");
                scanf("%f", &m5);

                break;

            case 2:
                total = m1 + m2 + m3 + m4 + m5;
                avg = total / 5;

                if(avg <= 100 && avg >= 90) {
                    strcpy(grade, "A");
                    strcpy(result, "PASS");
                }
                else if(avg <= 89 && avg >= 80) {
                    strcpy(grade, "B");
                    strcpy(result, "PASS");
                }
                else if(avg <= 79 && avg >= 70) {
                    strcpy(grade, "C");
                    strcpy(result, "PASS");
                }
                else if(avg <= 69 && avg >= 60) {
                    strcpy(grade, "D");
                    strcpy(result, "PASS");
                }
                else if(avg <= 59 && avg >= 35) {
                    strcpy(grade, "F");
                    strcpy(result, "PASS");
                }
                else if(avg <= 34 && avg >= 0) {
                    strcpy(grade, "F");
                    strcpy(result, "FAIL");
                }
                else {
                    strcpy(grade, "CANNOT BE CALCULATED");
                    strcpy(result, "INVALID MARKS");
                }

                printf("Result Calculated Successfully!\n");
                break;

            case 3:
                printf("Roll Number: %d\n", rollno);
                printf("Name: %s\n", name);
                printf("Total: %f\n", total);
                printf("Average: %f\n", avg);
                printf("Grade: %s\n", grade);
                printf("Result: %s\n", result);
                break;

            case 4:
                printf("THANK YOU\n");
                printf("EXITING\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}
