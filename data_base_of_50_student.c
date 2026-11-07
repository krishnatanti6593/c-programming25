#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float mark;
};

int main() {
    struct student s[50];
    int i;

    // Taking student details
    for(i = 0; i < 50; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].mark);
    }

    // Displaying student details
    printf("\n\n===== STUDENT DATABASE =====\n");

    for(i = 0; i < 50; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].mark);
    }

    return 0;
}