//Find SECOND SMALLEST and SECOND LARGEST element in an ARRAY

#include<stdio.h>
#include<limits.h>
void findsecondSMallestLargest(int arr[],int n){
    int smallest=INT_MAX,secondSmallest= INT_MAX;
    int largest=INT_MIN,secondLargest= INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secondSmallest=smallest;
            smallest=arr[i];
        }else if(arr[i]< secondSmallest && arr[i]!= smallest){
            secondSmallest=arr[i];
        }
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    printf("Second Smallest: %d\n",secondSmallest);
    printf("Second Largest: %d\n",secondLargest);

}

int main(){
    int arr[]={51,32,12,41,65,87,98,52,36,47,76,29,65,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    findsecondSMallestLargest(arr,n);
    return 0;
}