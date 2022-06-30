#include<stdio.h>
int isprime(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n,m,c=0;scanf("%d
%d",&n,&m);
    for(int i=n;i<=m;i++){
        if(isprime(i)) c++;
    }
    printf("%d",c);
    return 0;
}