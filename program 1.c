#include <stdio.h>
#include <math.h>

int main(){
    float x, y, z, area, s;

    printf("Enter the value of x: ")    ;
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    printf("Enter the value of z: ");
    scanf("%f", &z);

    s = (x + y + z) / 2;
    //library math.h  is used for calling radicals and other mathemathematical operators.
    area = sqrt(s * (s - x) * (s - y) * (s - z));
    printf("\n area : %.3f", area);

    return 0;
}
