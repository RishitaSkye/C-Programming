//Calculate SUM of the elements of the ARRAY

#include<stdio.h>
#include<math.h>

int sumArray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){

        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n =sizeof(arr)/sizeof(arr[0]);

    printf("Sum of elements is %d\n",sumArray(arr,n));
    return 0;
}