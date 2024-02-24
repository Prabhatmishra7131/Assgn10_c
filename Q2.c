#include <stdio.h>
float simpleInterest(int, float, int);
int main()
{
    int p, t;
    float r;
    printf("Enter the Principal amount, rate of interst and Time period: ");
    scanf("%d%f%d", &p, &r, &t);
    printf("Simple Interest for the given principal amount, rate of interest and time is: %f ", simpleInterest(p, r, t));
    return 0;
}
float simpleInterest(int p, float r, int t)
{
    float si;
    si = (p * r * t) / 100;
    return si;
}