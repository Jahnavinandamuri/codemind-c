#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int max,t[n];
    for(int i=0;i<n;i++){
        max=0;
        for(int j=i+1;j<n;j++){
            if(max<a[j]){
                max=a[j];
            }
        }
        t[i]=max;
    }
    t[n-1]=-1;
    for(int i=0;i<n;i++){
        printf("%d ",t[i]);
    }
    return 0;
   
}


