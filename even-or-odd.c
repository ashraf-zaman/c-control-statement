#include <stdio.h>
int main ()
{
    int r;

    printf("Enter any number : ");
    scanf("%d",&r);

    if (r%2==0)
    {
        printf("Even");
    }
    else
        printf("Odd");

    getch();
    return 0;
}
