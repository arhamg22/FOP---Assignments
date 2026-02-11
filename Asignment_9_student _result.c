#include <stdio.h>
int main() {
int m1, m2, m3, m4, m5;
int total;
float percentage;
printf("Enter marks of five subjects: ");
scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
total = m1 +m2 + m3 + m4 + m5;
percentage = (total / 500.0) * 100;
printf("Total marks obtained is %d\n", total);
printf("Percentage is %.2f%%\n", percentage);
if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40) {
printf("Result: PASS\n");
if (percentage >= 75)
printf("Grade: Distinction\n");
if (percentage >= 60 && percentage < 75)
    printf ("Grade : First division\n");
if (percentage >= 50 && percentage <60)
printf("Grade: Second division\n");
if (percentage >= 40 && percentage <50)
printf("Grade: Third division\n");
}
else {
printf("Result: FAIL\n");
}
return 0;
}
                                                                
                                                                                                                    

                                                                                                                            