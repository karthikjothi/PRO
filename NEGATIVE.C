#include <stdio.h>
#include<conio.h>
int main()
{
    int Z;
    printf("Enter any number: ");
    scanf("%d", &Z);
    if(Z> 0)
    {
        printf("Number is POSITIVE");
    }
    if(Z<0)
    {
        printf("Number is NEGATIVE");
    }
    if(Z==0)
    {
        printf("Number is ZERO");
    }

    return 0;
}
