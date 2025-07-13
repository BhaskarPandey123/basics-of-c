//write a program that determines the largest of three numbers by.
#include <stdio.h>

int main(){
    int a, b, c;

    //get the values
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%ed", &c);

    //
    if (a > b && a > c){
        printf("a is larger than b and c.");
    }else if (b > c && b > a){
        printf("b is greater than a and c.");
    }else if (c > a && c > b){
        printf("c is greater than a and b");
    }

    return 0;
}