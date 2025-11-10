#include <stdio.h>

struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main() {
    struct student_record s[5];
    int i, topper_index = 0;

    // Reading data of 5 students
    for(i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_number);
        printf("Enter total marks: ");
        scanf("%f", &s[i].total_marks);
    }

    // Finding the topper
    for(i = 1; i < 5; i++) {
        if(s[i].total_marks > s[topper_index].total_marks) {
            topper_index = i;
        }
    }

    // Displaying the topper
    printf("\n===== Topper Details =====\n");
    printf("Name: %s\n", s[topper_index].name);
    printf("Roll Number: %d\n", s[topper_index].roll_number);
    printf("Total Marks: %.2f\n", s[topper_index].total_marks);

    return 0;
}

