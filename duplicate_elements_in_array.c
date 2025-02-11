#include<stdio.h>
int main(){
    int arr[100],n,i,j;

    //input:number of elements
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    //input:elements of the array
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //finding duplicate elements
    printf("Duplicate elements in the array:");

    int found=0; //flag to check if any duplicates exist

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                found=1;

                break;//avoid counting the same duplicates multiple time
            }
        }
    }
    if(!found){
        printf("No duplicates found.");
    }
    printf("\n");
    return 0;
}
