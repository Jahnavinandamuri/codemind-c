#include<stdio.h>
int main(){
    int n,count=0,count1=0;
    scanf("%d",&n);
    int a[n],t,flag=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        
       for(int j=i+1;j<n;j++){
           if(a[i]==a[j]){
               t=a[i];
               break;
           }
       }
    }
    printf("%d",t);
    return 0;
}