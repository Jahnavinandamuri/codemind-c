#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<n;i++){
        if(a[i]<=t){
            count+=1;
        }
        else
        count+=2;
    }
    printf("%d",count);
    return 0;
    
}

