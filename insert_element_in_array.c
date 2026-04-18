#include<stdio.h>
int main(){
    int arr[100], n, i, pos, element;

    //input: number of elements             5
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    //input: elements of the array         10,20,30,40,50
    printf("Enter %d elements: ",n);
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }

    //input: position and new element
    printf("Enter the position to insert (1 to %d):",n+1);
    scanf("%d",&pos);
      if(pos<1 || pos>n+1){
        printf("Invalid position!");
        return 1;
      }
      printf("Enter the new element to insert:");
      scanf("%d",&element);

    //shifting elements to the right side->
    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }

    //inserting the new element
    arr[pos-1]=element;
    n++; //increase the array size

    //output: the updated array
    printf("The updated array is:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
printf("\n");

return 0;
    }