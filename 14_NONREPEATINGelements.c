//Find all NON-REPEATING ELEMENTS in an ARRAY

#include<stdio.h>
void findNonRepeatingElements(int arr[],int n){
    //printf("Non Repeating Elements are:\n");
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count ==1){
            printf("%d\n",arr[i]);
        }
    }
}
int main(){
    int arr[]={55,65,15,25,45,18,45,25,55};
    int n= sizeof(arr)/sizeof(arr[0]);
    findNonRepeatingElements(arr,n);
    return 0;
}