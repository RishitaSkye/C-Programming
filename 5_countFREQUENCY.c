//Count FREQUENCY of each element in an ARRAY

#include<stdio.h>
void countFrequency(int arr[], int n){
    int freq[n];
    for(int i=0;i<n;i++){
    freq[i]=-1;
    }
    for(int i=0;i<n;i++){
        if(freq[i]==-1){
int count =1;
for(int j=i+1;j<n;j++){
    if(arr[i]==arr[j]){
        count++;
        freq[j]=0;
    }
}
freq[i]=count;
        }
    }
printf("Element appears Frequency\n");
for(int i=0;i<n;i++){
    if(freq[i]>0){
        printf("%d appears %d times\n",arr[i],freq[i]);
    }
} 
}
int main(){
    int arr[]={54,68,12,36,85,85,85,85,54,68,3,3,2,2,58,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    countFrequency(arr,n);
return 0;
}