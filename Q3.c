#include <stdio.h>
int EvenOdd(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The result is: %d", EvenOdd(num));
    return 0;
}
int EvenOdd(int n)
{
    int result;

    if (n % 2 == 0)
        result = 1;
    else
        result = 0;

    return result;
}