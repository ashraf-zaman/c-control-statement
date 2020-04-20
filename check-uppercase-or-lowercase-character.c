#include <stdio.h>
int main ()
{
    char ch;

    printf("Enter any letter : ");
    scanf("%c",&ch);

    if (ch >='a' && ch <= 'z')
        printf("This is the small letter\n");

    else if (ch >= 'A' && ch <='Z')
        printf("This is the capital letter\n");

    else
        printf("It's not a letter\n");

    getch();
    return 0;
}
