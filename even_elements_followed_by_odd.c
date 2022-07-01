#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],s=0,f=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
       if(a[i]%2==0)
       printf("%d ",a[i]);
    }
    for(int i=0;i<n;i++){
       if(a[i]%2==1)
       printf("%d ",a[i]);
    }
   
     return 0;
}