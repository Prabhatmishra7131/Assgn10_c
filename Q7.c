#include<stdio.h>
int factorial(int);
int combinations(int,int);
int main()
{
    int n,r;
    printf("Enter the number of items and selected items: ");
    scanf("%d%d",&n,&r);
    printf("The number of combinations that can be made are: %d ",combinations(n,r));
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

int combinations(int num, int select)
{
    return factorial(num)/factorial(select)/factorial(num-select);
}