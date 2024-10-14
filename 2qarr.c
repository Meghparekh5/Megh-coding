#include<stdio.h>
int sumarr(int arr[],int size)
{
    int sum=0,length=0;
 for(int i=0;i<size;i++){
    sum+=arr[i];
    length++;
 }

    printf("\nSum of all element is = %d",sum);
    printf("\nlength is = %d",length);
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