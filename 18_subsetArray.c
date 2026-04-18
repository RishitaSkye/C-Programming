//Check if array is a SUBSET of another array or NOT?

#include<stdio.h>

int isSubset(int A[],int n, int B[],int m){
    for(int i=0;i<m;i++){
        int found=0;
        for(int j=0;j<n;j++){
            if(B[i]==A[j]){
                found=1;//found the element
                break;
            }
        }
        if(!found)
        return 0; //element not found, B is not a subset
    }
    return 1;//all element found, B is a subset
}
int main(){
    int A[]={1,3,5,6,8};
    int B[]={5,9,4};
    int n= sizeof(A)/sizeof(A[0]);
    int m= sizeof(B)/sizeof(B[0]);

    if(isSubset(A,n,B,m)){
    printf("B is a subset of A\n");
    }
    else{
    printf("B is NOT a subset of A\n");
}
return 0;
}
