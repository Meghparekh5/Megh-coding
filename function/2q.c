#include<stdio.h>
void division(int a)
{
    if(a%3==0 && a%5==0)
    {
        printf("\n%d is divisible by both 3 and 5",a);
    }
    else{
        printf("\n%d is notdivisible by both 3 and 5",a);
    }
}
void main(){
int a;
printf("Enter value of a is = ");
scanf("%d",&a);
division(a);
}