#include <stdio.h>
int main()
{
    int uNum;

    printf("Enter a integer number : ");
    scanf("%d",&uNum);

    if(uNum > 0)
        printf("Positive");

    else if (uNum < 0)
        printf("Negative");

    else
        printf("Zero");

    getch();
    return 0;
}
