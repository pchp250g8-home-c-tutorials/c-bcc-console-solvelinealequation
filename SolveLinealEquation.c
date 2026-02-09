#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    float a, b;
    system("cls");
    printf("Input coefficients of lineal equation\r\n");
    scanf("%f%f", &a, &b);
    printf("Try to solve the equation: %f * x + %f = 0\r\n", a, b);
    if ((a == 0) && (b == 0))
    {
        printf("The answer is any number\r\n");
    }
    else if ((a == 0) && (b != 0))
    {
        printf("The equation has no solution\r\n");
    }
    else
    {
        printf("The equation has the following solution : %f\r\n", (-b / a));
    }
    getchar();
    getc(stdin);
    return 0;
}
