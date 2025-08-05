#include <stdio.h>
main() {
    int marks;
    char grade;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 90) {
        grade = 'A';
    } else if (marks > 75) {
        grade = 'B';
    } else if (marks > 50) {
        grade = 'C';
    } else {
        grade = 'D';
    }


    switch (grade) {
        case 'A':
            printf("Grade: A (Excellent!)\n");
            break;
        case 'B':
            printf("Grade: B (Very Good)\n");
            break;
        case 'C':
            printf("Grade: C (Good)\n");
            break;
        case 'D':
            printf("Grade: D (Needs Improvement)\n");
            break;
        default:
            printf("Invalid Grade\n");
    }
}
