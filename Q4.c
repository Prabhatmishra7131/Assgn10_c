#include<stdio.h>
void naturalNumbers(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    naturalNumbers(num);
    return 0;
}
void naturalNumbers(int n)
{   
    printf("The n Natural numbers are: ");
    for(int i=0;i<=n;i++)
    printf("%d ",i);
  
}