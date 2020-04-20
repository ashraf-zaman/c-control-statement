#include <stdio.h>
int main()
{
    char latter;

    printf("Enter any latter : ");
    scanf("%c",&latter);

    if(latter == 'a' || latter == 'e' || latter == 'i' || latter == 'o' || latter == 'u')
        printf("Vowel");

    else if(latter=='A' || latter == 'E' || latter == 'I' || latter == 'O' || latter == 'U')
        printf("Vowel");

    else
        printf("Consonant");

    getch();
    return 0;
}
