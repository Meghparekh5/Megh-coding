#include<stdio.h>
int main()
{
    int p,n;
    float r;
    float i;
    printf("Enter p");
    scanf("%d",&p);
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter r");
    scanf("%f",&r);
    i= p*n*r/100;
    printf("i is = %f",i);


}