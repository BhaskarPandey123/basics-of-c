#include <stdio.h>

int main(){
    int Mp, Mc, Mm;
    char name[100];
    int Rn;
    int p, c, m;

    printf("Enter your role number: ");
    scanf("%d", &Rn);
    printf("Enter your name: ");
    scanf("%[^\n]", &name);


    printf("Enter the marks of physics: ");
    scanf("%d", &p);
    printf("Enter the marks of chemistry: ");
    scanf("%d", &c);
    printf("Enter the marks of mathematics: ");
    scanf("%d", &m);

    printf("\n \t -: Student profie and Eligibilty :-");
    printf("\n \t __________________________________");
    printf("\n Roll number     Name     DOB     Mobile");
    printf("\n \t %d", Rn);
    printf("\t \t %s", name);
    printf("\t Dob");
    printf("\t 1234567890");
    printf("\n _____________________________________________");
    printf("\n S.N.     Subject     Marks");
    printf("\n 1.)      Physics       %d", p);
    printf("\n 2.)     Chemistry      %d", c);
    printf("\n 3.)    Mathematics     %d", m);
    printf("\n ______________________________________________");

    if( p < 40 && c < 50 && m < 60 && (p + m) < 150 && (p + c + m) < 200){
        printf("\n Sorry! You are not eligible for the program.");
    }else{
        printf("\n congrats! You are eligible for programe");
    }


    return 0;
}