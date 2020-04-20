#include <stdio.h>
int main()
{
    int num_1, num_2, num_3;

    printf("Enter three number : ");
    scanf("%d %d %d",&num_1, &num_2, &num_3);

    if(num_1 > num_2 && num_1 > num_3)
        printf("The larger number is = %d",num_1);

    else if(num_2 > num_1 && num_2 > num_3)
        printf("The larger number is = %d",num_2);

    else if(num_3 > num_1 && num_3 > num_2)
        printf("The larger number is = %d",num_3);

    else
        printf("Numbers are equal");

    getch();
    return 0;
}
