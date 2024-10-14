#include<stdio.h>
int sumarr(int arr[],int size)
{
    int sum=0;
 for(int i=0;i<size;i++){
    sum+=arr[i];
 }

    printf("Sum of all element is = %d",sum);
}

void main()
{
    int arr[10],size;
    printf("Enter size= ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
    printf("arr[%d]= ",i);
    scanf("%d",&arr[i]);
}
   sumarr(arr,size); 
} 