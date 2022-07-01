#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int n1,n2,f=0;
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        for(int i=0;i<n;i++){
            if(a[i]<=n1 && a[i]>=n2){
                printf("%d ",a[i]);
                f=1;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]<=n2 && a[i]>=n1){
                printf("%d ",a[i]);
                f=1;
            } 
        }
    }
    if(f==0)
    printf("-1");
    
    return 0;
}


