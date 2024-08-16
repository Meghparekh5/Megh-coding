#include<stdio.h>
 #define PI 3.14
 int main()
 {
    int radius;
    float perimeter;
    printf("Enter your radius");
    scanf("%d",&radius);
    perimeter= 2*PI*radius;
    printf("perimeter of circle is= %f",perimeter);


 }