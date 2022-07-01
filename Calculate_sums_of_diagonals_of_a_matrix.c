#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n],sum=0,sum1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum=sum+a[j][i];
            }
            if(i+j==n-1){
                sum1+=a[j][i];
            }
        }
    }
    printf("Principal Diagonal:%d
Secondary Diagonal:%d",sum,sum1);
    return 0;
}
