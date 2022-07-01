#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    int sum=0,sum1=0;
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
        if(sum1<sum)
        sum1=sum;
    }
    int sum2=0,sum3=0;
    
        
    for(int j=0;j<n;j++){
        sum3=0;
        for(int i=0;i<m;i++){
            sum3+=a[i][j];
        }
        if(sum2<sum3)
        sum2=sum3;
    }
    int m1=sum1>sum2?sum1:sum2;
    printf("%d",m1);
    return 0;
    
    
    
}












































































































