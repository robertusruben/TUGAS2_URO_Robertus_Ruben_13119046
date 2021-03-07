#include <stdio.h>
#include <stdlib.h>

/*
Stating Function for Integral
In this Scenario, let the function be 3*x^2 + 2*x +1
*/
double function(double n1){
    return 3 * n1 * n1 + 2 * n1 + 1;
}

/*Function for Addition*/
double Addition(double n1, double n2){
    return n1 + n2;
}

/*Function for Subtraction*/
double Subtraction(double n1, double n2){
    return n1 - n2;
}

/*Function for Multiplication*/
double Multiplication(double n1, double n2){
    return n1 * n2;
}

/*Function for Division*/
double Division(double n1, double n2){
    return n1 / n2;
}

/*Function for Power*/
double Power(double n1, double n2){

    char i = 1;
    double n1_old = n1;
    while (i < n2){
        n1 = n1*n1_old;
        i = i + 1;
    }
    return n1;
}

/*Function for Integral*/
double Integral(double n1, double n2){

    double imax = abs(n1 - n2)/0.0005; /*Jumlah Iterasi Total*/
    double iteration = 1;
    double sum = 0;

    while (iteration < imax){

        double x1 = function(n1);
        double x2 = function(n1 + 0.0005);

        sum += 0.0005 * (x1 + x2) / 2;
        n1 += 0.0005;
        iteration ++;
    }

    return sum;
}

/*Main Function*/
int main(){

    double n1;
    double n2;
    double op;

    /*Penentuan Fungsi*/
    printf("Enter 1 for Addition");
    printf("Enter 2 for Substraction");
    printf("Enter 3 for Multiplication");
    printf("Enter 4 for Division");
    printf("Enter 5 for Power");
    printf("Enter 6 for Integral of 3X^2 + 2X + 1")
    printf("Enter Operator: ");
    scanf("%d", &op);


    /*If function berdasarkan Input fungsi*/
    if(op == 1)
    {
        printf("Enter input 1: ");
        scanf("%lf", &n1);
        printf("Enter input 2: ");
        scanf("%lf", &n2);

        printf("%f + %f = %f", n1, n2, Addition(n1,n2));
    }
    else if(op == 2)
    {
        printf("Enter input 1: ");
        scanf("%lf", &n1);
        printf("Enter input 2: ");
        scanf("%lf", &n2);

        printf("%f - %f = %f", n1, n2, Subtraction(n1,n2));
    }
    else if(op == 3)
    {
        printf("Enter input 1: ");
        scanf("%lf", &n1);
        printf("Enter input 2: ");
        scanf("%lf", &n2);

        printf("%f * %f = %f", n1, n2, Multiplication(n1,n2));
    }
    else if(op == 4)
    {
        printf("Enter input 1: ");
        scanf("%lf", &n1);
        printf("Enter input 2: ");
        scanf("%lf", &n2);

        printf("%f / %f = %f", n1, n2, Division(n1,n2));
    }
    else if(op == 5)
    {
        printf("Enter input 1: ");
        scanf("%lf", &n1);
        printf("Enter input 2: ");
        scanf("%lf", &n2);

        printf("%f ^ %f = %f", n1, n2, Power(n1,n2));
    }
    else if(op == 6)
    {
        printf("From X: ");
        scanf("%lf", &n1);
        printf("To X: ");
        scanf("%lf", &n2);
        printf("%Integral of the equation 3X^2 + 2X + 1 from X=%f to X=%f = %f", n1, n2, Integral(n1,n2));
    }

    return 0;
}


