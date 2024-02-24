#include<stdio.h>
int is_containing_digit(int,int);
int main()
{
    int num,digit;
    printf("Enter the number and digit: ");
    scanf("%d%d",&num,&digit);
    if(is_containing_digit(num,2))
        printf("Yes %d contains %d",num,digit);
    else
        printf("No %d doesn't conatain %d",num,digit);
    return 0;

}
int is_containing_digit(int n,int d)
{
    while(n)
    {
        if(n%10==d)
            return 1;
        n/=10;
    }
    return 0;

}