#include<stdio.h>
int main(){
int arr[10],n,i,element,position;
printf("Enter the no of elements u want to insert:");
scanf("%d",&n);
printf("Enter the array elements:");
  for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
    printf("\nThe original array is- \n");
  
  for(i=0;i<n;i++)
    printf("%d",arr[i]);
  
  printf("\nEnter the element u want to insert in the array:");
  scanf("%d", &element);
  printf("Enter the position where u want to insert the element:");
  scanf("%d",&position);
    for(i=n-1;i>=position;i--)
        arr[i+1]=arr[i];
        arr[position]=element;
        n=n+1;
    
    printf("The updated array is: \n");
    for(i=0;i<=n;i++)
        printf("%d",arr[i]);
    
    return 0;
}