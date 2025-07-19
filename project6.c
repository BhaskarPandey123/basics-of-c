 #include <stdio.h>

 int main(){
    long long term;
    long long a, b, c;
    long long i;

    a = 0;
    b = 1;

    printf("Enter the number of terms you want to print: ");
    scanf("%lld", &term);

    printf("fn; %lld\t %lld\t", a, b);

    for(i = 2; i < term; i++){
        c = a + b;
        printf("%lld\t", c);
        a = b;
        b = c;
    }
    return 0;
 }