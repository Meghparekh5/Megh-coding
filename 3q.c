#include<stdio.h>
#define half 0.5
int main()
{
int base,height;
float area;
printf("Enter your base");
scanf("%d",&base);
printf("Enter your height");
scanf("%d",&height);
area = half*base*height;
printf("area of triangle is=%f",area);
}