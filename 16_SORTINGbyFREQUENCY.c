//SORTING ELEMENTS of an array by FREQUENCY

#include<stdio.h>

void sortbyFrequency(int arr[],int n){

    int freq[n],visited=-1;

//Step 1:count the freq of each element
for(int i=0;i<n;i++){
    int count=1;
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            freq[j]=visited;//Mark element as visited
        }
    }
    if(freq[i] != visited)
    freq[i]=count;
} 
//step2:sort based on frequency (decending)
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(freq[i]<freq[j] ||( freq[i]==freq[j] && arr[i]>arr[j])){
            //swap elements
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            //swap frequencies
            temp=freq[i];
            freq[i]=freq[j];
            freq[j]=temp;
        }
    }
}
//step3:print the sorted array
printf("The sorted array by frequency is: ");
for(int i=0;i<n;i++){
    if(freq[i]!=visited){
        for(int j=0;j<freq[i];j++){
            printf("%d",arr[i]);
        }
    }
}
}
int main(){
    int arr[]={ 3, 3, 1, 1, 1, 1, 2, 2, 2, 5, 4, 4, 4};
    int n= sizeof(arr)/sizeof(arr[0]);

    sortbyFrequency(arr,n);
    return 0;
}