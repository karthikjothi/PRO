#include <stdio.h>
#include<conio.h>
int main()
{
    int X;

    printf("Enter an integer: ");
    scanf("%d", &X);

    // True if the number is perfectly divisible by 2
    if(X % 2 == 0)
        printf("%d is even.", X);
    else
        printf("%d is odd.", X);

    return 0;
}
