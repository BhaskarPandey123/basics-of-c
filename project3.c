//Task: Write a program to calculate the roots of a quadratic Equation.

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, r1, r2;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);

    d = b * b - 4 * a * c;

    printf("The discriminant of given equation is: %.2f", d);
    r1 = (-b - sqrt(d))/ (2 * a);
    printf("\n first root (alpha) = %.2f", r1);
    r2 = (-b + sqrt(d))/ (2 * a);
    printf("\n second root (Beta): %.2f", r2);
    return 0;
}