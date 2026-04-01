#include <stdio.h>

int main() {

    struct Student {
        char name[50];
        int roll_number;
        float m1, m2, m3, m4, m5;
        float total;
        float result;
        char grade;
    };
    struct Student students[100];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("Marks for 5 subjects: ");
        scanf("%f %f %f %f %f",
              &students[i].m1, &students[i].m2,
              &students[i].m3, &students[i].m4,
              &students[i].m5);
        
        students[i].total = students[i].m1 + students[i].m2 +
                            students[i].m3 + students[i].m4 +
                            students[i].m5;

        students[i].result = students[i].total / 5;

        
        if (students[i].result >= 90)
            students[i].grade = 'A';
        else if (students[i].result >= 80)
            students[i].grade = 'B';
        else if (students[i].result >= 70)
            students[i].grade = 'C';
        else if (students[i].result >= 60)
            students[i].grade = 'D';
        else
            students[i].grade = 'F';
    }

    printf("\n--- Student Details ---\n");

    for (int i = 0; i < n; i++) {
        printf("\nName: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Total Marks: %.2f\n", students[i].total);
        printf("Average Marks: %.2f\n", students[i].result);
        printf("Grade: %c\n", students[i].grade);
    }

    return 0;
}
    
