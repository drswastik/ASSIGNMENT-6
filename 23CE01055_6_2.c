#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of integer elements:");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        printf("Enter the %d element of array:",i);
        scanf("%d",&arr[i]);
         }
    printf("The integer array you entered is:\n");
    for(int j=0;j<a;j++){
        printf("%d\t",arr[j]);
    }
    printf("\n");
    printf("The Required numbers are:");
reqnum(arr);
return 0;
}
void reqnum(int a[]){
    int s=sizeof(a);
    int sum = 0;
    for(int p=0;p<s;p++){
        sum+=a[p];
    }
    float avg=sum/s;
    int flag=0;
    for(int t=0;t<s;t++){
        if(a[t]>avg){
            printf("%d\t",a[t]);
            flag=1;
        }
    }
    if(flag==0){
        printf("No Such Numbers Found!!");
    }
}