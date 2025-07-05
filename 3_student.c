#include <stdio.h>

// Define structure to store student details
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[3];  // Array to store 3 students
    int i;

    // Input details for 3 students
    printf("Enter details for 3 students:\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);  // Read string with spaces
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Print student details
    printf("\nStudent Details:\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
