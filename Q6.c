#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The factorial is: %d",factorial(num));
    
    return 0;
}
int factorial(int n)
{
    long int fact=1;
    while(n)
    {
        fact*=n;
        n--;
    }
    return fact;
}