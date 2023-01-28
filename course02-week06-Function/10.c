#include <stdio.h>

char getGrade(int mark)
{
    char grade;

    if (mark >= 80)
        grade = 'A';
    else if (mark >= 60)
        grade = 'B';
    else if (mark >= 40)
        grade = 'C';
    else
        grade = 'F';

    return grade;
}

int main()
{
    int mark;
    scanf("%d", &mark);
    printf("Grade = %c", getGrade(mark));
    return 0;
}