#include<stdio.h>
float areaOfCircle(float);
int main ()
{
    float a;
    printf("Enter the radius of circle: ");
    scanf("%f",&a);
    printf("Area of the circle is: %f ",areaOfCircle(a));
    return 0;
}
float areaOfCircle(float r)
{
    float area;
    area = 3.14*r*r;
    return area;
}


