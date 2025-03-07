//REARRANGE ARRAY in INCREASING-DECREASING order

#include<stdio.h>

//function to swap two elements
void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

//function to sort the array in ascending order(Bubble Sort)
void sortArray(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

//function to rearrange the array in increasing-decreasing order(Bubble Sort)
void rearrangeArray(int arr[],int n){
    sortArray(arr,n); //sort the array in ascending order


//define the middle point
int mid=(n%=2==0)?(n/2):(n/2+1);

//Reverse the 2nd half for decreasing order
int left=mid,right=n-1;
  while(left<right){
    swap(&arr[left],&arr[right]);
    left++;
    right++;
   }
}
//Function to print the array
void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

rearrangeArray(arr,n);//call function to rearrange array

printf("Reagganged array in Increasing-Decreasing order:");
printArray(arr,n);//print the rearranged array

return 0;
}