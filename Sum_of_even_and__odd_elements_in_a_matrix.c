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
   
        for(int j=0;j<n;j++){
            if(a[i][j]%2==0)
            sum+=a[i][j];
            else
             sum1+=a[i][j];
        }
       
    }
  
    printf("%d %d",sum,sum1);
    return 0;
    
    
    
}
