#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,rt1,rt2;

    printf("Enter the value of 'a' of your quadratic equation: ");
    scanf("%f", &a);

    printf("Enter the value of 'b' of your quadratic equation: ");
    scanf("%f", &b);

    printf("Enter the value of 'c' of your quadratic equation: ");
    scanf("%f", &c);

    rt1 = (-b + sqrt(b*b-4*a*c))/ (2*a);
    rt2 = (-b - sqrt(b*b-4*a*c))/ (2*a);

    printf("The roots of your quadratic equation are %f and %f", rt1, rt2);

    return 0;