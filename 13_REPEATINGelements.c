//Find all REPEATING ELEMENTS in an ARRAY

#include<stdio.h>
void findRepeatingElements(int arr[],int n){
    printf("Repeating Elements:");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d\t",arr[i]); //array at position i
                break;
            }
        }
    }
}
int main(){
    int arr[]={55,65,15,25,45,18,45,25,18,55};
    int n= sizeof(arr)/sizeof(arr[0]);
    findRepeatingElements(arr,n);
    return 0;
}