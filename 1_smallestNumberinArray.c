//Find the SMALLEST NUMBER in an ARRAY

#include<stdio.h>
int main(){
    int arr[]={32,65,78,94,41,63,12,38,101,258,3695};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("The smallest element in the array is: %d", min);
    return 0;
}