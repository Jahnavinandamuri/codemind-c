#include<stdio.h>
int main(){
    int n,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int k; scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(a[i]==k) {
            f=1;
            printf("%d",i); break;
        }
    }
    if(f==0) printf("-1");
    return 0;
}