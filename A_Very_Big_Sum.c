#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long a[n],sum=0;
    for(int i=0;i<n;i++)
    scanf("%lld",&a[i]);
    for(int i=0;i<n;i++){
       sum=sum+a[i];
    }
    
    printf("%lld ",sum);
    return 0;
}
