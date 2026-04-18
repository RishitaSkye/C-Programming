//ADDING an ELEMENT in an ARRAY

#include<stdio.h>
void insertelement(int arr[],int *n,int element, int position){
    if(position>*n||position<0){
        printf("Invalid Position");
        return;
    }
    for(int i= *n;i>position;i--){
        arr[i]=arr[i-1];
    }
    arr[position]=element;
    (*n)++;
}
int main(){
    int arr[50]={31,5,8,34,98,89,56};  // 7
    int n= 7;  // 7 elements

    int element= 100,position=3;
    insertelement(arr,&n,element,position);
printf("Array after insertion: ");
for(int i=0;i<n;i++){
    printf("%d\t", arr[i]);
}
return 0;
}