#include<stdio.h>
int main(){
    int n;int i,j;
    scanf("%d",&n);
    if(n<3)
     printf("The pattern is not possible");
    else 
    {
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
            printf("*");
            }
            printf("
");
        }
        for(i=1;i<n;i++){
            for(j=n-1;j>=i;j--){
                printf("*");
            }
            printf("
");
        }
    }
  
    return 0;
}