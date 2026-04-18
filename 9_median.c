//Find the MEDIAN of the given array

#include<stdio.h>
#include<stdlib.h>

int compare(const void*a,const void*b){
    return (*(int *)a-*(int *)b);
}

float findMedian(int arr[], int n){
    qsort(arr, n, sizeof(int), compare);
    if(n%2 != 0)
      return arr[n/2];
    return (arr[n/2-1]+arr[n/2])/2.0;
}

int main(){
    int arr[]={7,6,3,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Median: %.2f\n",findMedian(arr,n));
    return 0;
}