#include <stdio.h>
int main()
{
    float  marks;

    printf("Enter Your marks : ");
    scanf("%f", &marks);

    if(marks >=100 || marks <=0)
        printf ("It's invalid marks");

    else if (marks >=80 && marks <=100)
        printf("Great you got A+\nGPA = 5.00");

    else if (marks >=70 && marks <=79)
        printf("Great you got A\nGPA = 4.00");

    else if (marks >=60 && marks <=69)
        printf("Great you got A-\nGPA = 5.00");

    else if (marks >=50 && marks <=59)
        printf("Great you got B\nGPA = 3.00");

    else if (marks >=40 && marks <=49)
        printf("Great you got C\nGPA = 2.00");

    else if (marks >=33 && marks <=39)
        printf("Great you got D\nGPA = 2.3");

    else if (marks >=0 && marks <=32)
        printf("Sorry! You are fail");
    else
        printf("Invalid marks");

    getch();
    return 0;
}
