/*Write a program to input name, marks of 5 subjects of a student and display the name of the student, the
total marks scored, percentage scored and the class of result*/

#include <stdio.h>

struct Student {
    char name[50];
    int marks[5];
    int totalMarks;
    float percentage;
    char resultClass[20];
};

// Function to calculate total marks and percentage
void calculateResult(struct Student *student) {
    student->totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        student->totalMarks += student->marks[i];
    }
    student->percentage = (student->totalMarks / 5.0);
    
    // Determine the class of result based on percentage
    if (student->percentage >= 85) {
        sprintf(student->resultClass, "Distinction");
    } else if (student->percentage >= 60) {
        sprintf(student->resultClass, "First Class");
    } else if (student->percentage >= 50) {
        sprintf(student->resultClass, "Second Class");
    } else if (student->percentage >= 35) {
        sprintf(student->resultClass, "Pass");
    } else {
        sprintf(student->resultClass, "Fail");
    }
}

int main() {
    struct Student student;

    // Input student name
    printf("Enter student's name: ");
    scanf("%s", student.name);
	
    // Input marks for 5 subjects
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &student.marks[i]);
    }

    // Calculate total marks, percentage, and result classification
    calculateResult(&student);

    // Display the result
    printf("\nStudent Name: %s\n", student.name);
    printf("Total Marks: %d\n", student.totalMarks);
    printf("Percentage: %.2f%%\n", student.percentage);
    printf("Result: %s\n", student.resultClass);

    return 0;
}
