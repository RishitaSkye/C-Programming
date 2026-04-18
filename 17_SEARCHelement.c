//SEARCH an element in an array

#include<stdio.h>
//function to perform linear search
int linearSearch(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i; //found, return index
        }
    }
    return -1; //not found
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=50;
    int index=linearSearch(arr,n,target);

    if(index!=-1){
    printf("Element %d found at index %d\n",target,index);
    }else{
printf("Element %d not foounf in the array\n",target);
    }
return 0;
}