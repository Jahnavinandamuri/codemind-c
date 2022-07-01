#include<stdio.h>
int main(){
    int n,t,cnt=0,k=0;
    scanf("%d %d",&n,&t);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(k>2)
        break;
        if(a[i]>t){
           k++;
        }
        if(a[i]<=t && k<2){
           cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
