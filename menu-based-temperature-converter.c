#include <stdio.h>
int main()
{
    int r;
    float tem,convertTem;

    printf("Welcome To Temperature Converter menu\n");

    printf("1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n\nEnter your choice : ");
    scanf("%d",&r);

    if(r==1)
    {
        printf("\nEnter your Fahrenheit Temperature : ");
        scanf("%f",&tem);
        convertTem = (tem-32)/1.8;
        printf("The Celsius Temperature is = %.2f\n",convertTem);
    }
    else if (r==2)
    {
        printf("\nEnter your Celsius Temperature :");
        scanf("%f",&tem);
        convertTem = (1.8*tem)+32;
        printf("The Fahrenheit Temperature is = %.2f\n",convertTem);
    }
    else
        printf("\nThis is the not correct Temperature");

    getch ();
    return 0;
}
