#include <stdio.h>
void prime_factors(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The prime factors of given number are: ");
    prime_factors(num);
    return 0;
}

void prime_factors(int n)
{
    int i = 2;
    while (n>1)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n/= i;
        }
        i++;
    }
}
