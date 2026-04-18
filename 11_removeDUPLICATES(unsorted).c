//REMOVE DUPLICATES from a unsorted ARRAY

#include<stdio.h>
void removeDuplicates(int arr[],int n){
    for(int i=0;i<n;i++){
        int duplicate=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
            duplicate=1;
            break;
        }
    }
    if(!duplicate){
        printf("%d",arr[i]);
    }
}
}
int main(){
    int arr[]={8,9,34,18,54,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Array after removing duplicates:");
    removeDuplicates(arr,n);
    return 0;
}