#include<stdio.h>
int main(){
int c,r,temp;
printf("Enter the number of rows:");
scanf("%d",&r);
printf("Enter the number of columns:");
scanf("%d",&c);
int arr[r][c];
for(int i=1;i<=r;i++){
    for (int j=1;j<=c;j++){
        printf("\nEnter the element for (%d,%d):",i,j);
        scanf("%d",&arr[i-1][j-1]);
}
}
printf("Matrix Before Transpose Is:\n");
for(int p=0;p<r;p++){
    for(int q=0;q<c;q++){
        printf("%d\t",arr[p][q]);
    }
    printf("\n");
}
int trans[c][r];
for(int m=0;m<c;m++){
    for(int n=0;n<r;n++){
        trans[m][n]=arr[n][m];
    }
}
printf("Transpose Of The Given Matrix Is:\n");
for(int t=0;t<c;t++){
    for(int e=0;e<r;e++){
        printf("%d\t",trans[t][e]);
    }
    printf("\n");
}
return 0;}