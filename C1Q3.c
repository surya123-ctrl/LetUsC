#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5;
    printf("Enter marks of student in 5 subjects : ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    float sumOfMarks = m1 + m2 + m3 + m4 + m5;
    float averageOfMarks = sumOfMarks / 500;
    float percentageOfMarks = averageOfMarks * 100;
    printf("Sum of Marks : %f\n", sumOfMarks);
    printf("Average of Marks : %f\n", averageOfMarks);
    printf("Percentage of Marks : %f\n", percentageOfMarks);
    return 0;
}