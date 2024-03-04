#include<stdio.h>
int main(){
int l,u;

printf("Input Lower Limit:");
scanf("%d",&l);
printf("Input Upper Limit:");
scanf("%d",&u);
getprime(l,u);
return 0;

}
void getprime(int a,int b){
    int got=0;
    for(int i=a;i<=b;i++){
        int flag=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag = 0;
                break;}
                
            }
            if(flag==1){
              printf("%d\t",i); 
              got=1; 
            }
        }
        if(got==0){
            printf("Sorry no such prime numbers found!!");
        }
        
    }