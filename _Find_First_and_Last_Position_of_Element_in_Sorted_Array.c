#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],d=-1,flag=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int k,i,j;scanf("%d",&k);
    for(i=0;i<n;i++){
        if(a[i]==k){
       flag=1;
       break;
        }
    }
    
    for(j=n-1;j>=0;j--){
       if(a[j]==k){
        flag=1;
        break;
       }
    }
    if(flag==1)
    printf("%d %d",i,j);
    else
    printf("%d %d",d,d);
    
return 0;
}