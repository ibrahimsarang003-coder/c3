#include <stdio.h>
struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};
int main() {
    struct student_record students[5];
    int i, topper_index = 0;
    // Input student details
    for(i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Total Marks: ");
        scanf("%f", &students[i].total_marks);
        printf("\n");
    }
    // Find the topper
    for(i = 1; i < 5; i++)  {
        if(students[i].total_marks > students[topper_index].total_marks)
            topper_index = i;
    }
    // Display topper details
    printf("Topper Details:\n");
    printf("Name: %s\n", students[topper_index].name);
    printf("Roll Number: %d\n", students[topper_index].roll_number);
    printf("Total Marks: %.2f\n", students[topper_index].total_marks);

    return 0;
}