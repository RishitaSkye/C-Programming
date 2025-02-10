#include<stdio.h>
int main(){
    int arr[100], n, i, pos;

    //input: number of elements             5
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    //input: elements of the array         10,20,30,40,50
    printf("Enter %d elements: ",n);
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }

    //input: position and new element
    printf("Enter the position to insert (1 to %d):",n);
    scanf("%d",&pos);
      if(pos<1 || pos>n){
        printf("Invalid position!");
        return 1;
      }

    //shifting elements to the left side <-
    for(i=pos-1;i<=n-1;i++){
        arr[i]=arr[i+1];
    }

    n--; //derease the array size

    //output: the updated array
    printf("The updated array is:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
printf("\n");

return 0;
    }
