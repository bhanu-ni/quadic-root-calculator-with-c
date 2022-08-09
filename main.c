#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float d, r1, r2, real, complex;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (a != 0)
    {
        // For discriminant grater than zero
        // or roots are real
        if (d > 0)
        {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("r1: %.2g \nr2: %.2g", r1, r2);
        }
        // For discriminant equale to zero
        // or both the roots are same
        else if (d == 0)
        {
            r1 = -b / (2 * a);
            printf("r1 = r2: %.2g", r1);
        }

        // For discriminant smaller than zero
        // or roots are complex
        else
        {
            real = -b / (2 * a);
            complex = sqrt(-d) / (2 * a);
            if (-b % 2 * a == 0)
            {
                printf("r1: %.2g + %.2gi\nr2: %.2g - %.2gi", real, complex, real, complex);
            }
            else
            {
                printf("r1: %d/%d + %c%.2g/%di\nr2: %d/%d - %c%.2g/%di", -b, 2 * a, 251, -d, 2 * a, -b, 2 * a, 251, -d, 2 * a);
            }
        }
    }
    else
    {
        printf("Wrong input 'a' can't be zero!");
    }

    return 0;
}
