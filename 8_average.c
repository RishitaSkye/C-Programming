//Calculate AVERAGE of all elements in an ARRAY

#include<stdio.h>
#include<math.h>

float averageArray(int arr[],int n){

    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return (float)sum/n;
}
int main(){
    int arr[]={3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Average of the array is %.1f\n",averageArray(arr,n));
    return 0;
}