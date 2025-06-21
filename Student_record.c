#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student students[100];
    int count = 0, choice, i, searchRoll;

    while (1) {
        printf("\n=== Student Record System ===\n");
        printf("1. Add Student\n2. Display All\n3. Search by Roll\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting Student Record System.Thanks!\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter Roll No: ");
                scanf("%d", &students[count].roll);
                printf("Enter Name: ");
                scanf(" %[^\n]", students[count].name);
                printf("Enter Marks: ");
                scanf("%f", &students[count].marks);
                count++;
                printf("Student added successfully.\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\n--- Student Records ---\n");
                    for (i = 0; i < count; i++) {
                        printf("Roll: %d | Name: %s | Marks: %.2f\n", students[i].roll, students[i].name, students[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter roll number to search: ");
                scanf("%d", &searchRoll);
                int found = 0;
                for (i = 0; i < count; i++) {
                    if (students[i].roll == searchRoll) {
                        printf("Record Found = Name: %s | Marks: %.2f\n", students[i].name, students[i].marks);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Student with Roll No %d not found.\n", searchRoll);
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
