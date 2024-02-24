#include<stdio.h>
void oddNaturalNumbers(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    oddNaturalNumbers(num);
    return 0;
}
void oddNaturalNumbers(int n)
{
    printf("The n Odd Natural numbers are: ");
    for(int i=1;i<=n;i++)
    printf("%d ",2*i-1);
}