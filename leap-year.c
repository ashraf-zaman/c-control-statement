#include <stdio.h>
int main()
{
    int uYear;

    printf("Enter any year : ");
    scanf("%d",&uYear);

    if(uYear%400==0)
        printf("Leap year");

    else if (uYear%4==0 && uYear%100!=0)
        printf("Leap year");

    else
        printf("This is the not leap year");

    getch();
    return 0;
}
