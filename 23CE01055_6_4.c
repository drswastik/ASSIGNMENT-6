#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the size of big array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the size of small array:");
    scanf("%d",&m);
    int arr1[m];
    printf("For big array:\n");
    for(int i=0;i<n;i++){
        printf("Enter element number %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("For small array:\n");
    for(int j=0;j<m;j++){
        printf("Enter element number %d:",j);
        scanf("%d",&arr1[j]);
    }
    int flag=1,count=0;
    for(int s=0;s<m;s++) {
        for(int r=0;r<n;r++){
            if(arr1[s]==arr[r]){
                flag =1;
                count+=1;
                break;
            }
        else{
            flag=0;
        }}
        if(flag==0){
            printf("The small array is not a subset of big array!!");
            break;
        }
        }
    if(count==m){
        printf("The small array is a subset of big array");
    }
    return 0;}
