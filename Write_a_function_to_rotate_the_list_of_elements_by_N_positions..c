#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int t[n];
    scanf("%d ",&k);
    for(int i=0;i<n;i++){
        t[(i+k)%n]=a[i];
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",t[i]);
    }
    
    
    return 0;
}



 