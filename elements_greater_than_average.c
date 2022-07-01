#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],s=0,f=0,sum=0;
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum+=a[i];
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
       if(a[i]>=sum/n)
       s++;
    }
    printf("%d ",s);
   
     return 0;
}
