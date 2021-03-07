#include <stdio.h>
#include <stdlib.h>

int Addition(int a,int b){
    int c = (a+b);
    printf("%d  %d  %d\n", a, b, c);
    return 0;
}

int main()
{
    int a;
    int b;
    int c;

    printf("Enter input 1 & 2: ");
    scanf("%d %d", &a, &b);

    printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Power \n6. Integral\n");
    printf("Choose Output: ");
    scanf("%f", &c);

    if(c == 1)
    {
        Addition(a, b);
    }
    else if(c == 2)
    {
        printf("%d - %d = %f", a, b, (a-b));
    }
    else if(c == 3)
    {
        printf("%d x %d = %f", a, b, (a*b));
    }
    else if(c == 4)
    {
        printf("%d / %d = %f", a, b, (a/b));
    }
    else if(c == 5)
    {
        printf("%d ^ %d = %f", a, b, (a^b));
    }
    else if(c == 6)
    {
        printf("%d - %d = %f", a, b, (a-b));
    }

    return 0;
}


