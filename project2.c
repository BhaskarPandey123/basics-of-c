//Task: Write a program to calculate net salary when salary components are given.

#include <stdio.h>
#include <math.h>

int main(){
    //bs for basic salary.
    float bs, da, hra, sa, dctn;
    printf("Enter the amount as your basic salary; ")   ;
    scanf("%f", &bs);
    da = 0.25 * bs;
    printf("da: %.3f \n", da);
    hra = 0.15 * bs;
    printf("hra: %.2f \n", hra);
    sa = bs + da + hra;
    //calcultation of provident fund deduction.
    dctn = 0.1 * sa;
    printf("provident fund deduction: %f \n", dctn);

    return 0;
}