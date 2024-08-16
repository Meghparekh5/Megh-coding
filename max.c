#include <stdio.h>
int main()
{
    int x, y, z, k;
    printf("Enter the value of x:");
    scanf("%d", &x);
    printf("Enter the value of y:");
    scanf("%d", &y);
    printf("Enter the value of z:");
    scanf("%d", &z);
    printf("Enter the value of k:");
    scanf("%d", &k);
    if (x >= y)
    {
        if (x >= z)
        {
            if (x >= k)
            {
                printf("x is max");
            }
            else
            {
                printf("k is max");
            }
        }
        else
        {
            if (z >= k)
            {
                printf("z is max");
            }
            else
            {
              printf("k is max");
            }
        }
    }
    else
    {
        if (y >= z)
        {
            if (y >= k)
            {
                printf("y is greatest");
            }
            else{
                printf("k is max");
            }
        }
        else{
            if (z >= k)
            {
                printf("z is max");
            }
            else
            {
                printf("k is max");
            }
        }
    }
}
