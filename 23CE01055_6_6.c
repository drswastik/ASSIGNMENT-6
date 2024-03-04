#include<stdio.h>
int main(){
    printf("Enter the number of cities:");
    int n;
    scanf("%d",&n);
    int temp[n][7];
    float avtemp[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            printf("Enter the tempereture for city %d for day %d:",i,j+1);
            scanf("%d",&temp[i][j]);
        }
    }
    for(int a=0;a<n;a++){
        float sum=0;
        for(int r=0;r<7;r++){
            sum+=temp[a][r];
        }
        float avgt=sum/7;
        avtemp[a]=avgt;
    }
printf("The Average temperature of the cities for the week is:\n");
for(int s=0;s<n;s++){
    printf("%.2f\t",avtemp[s]);
}
return 0;
}