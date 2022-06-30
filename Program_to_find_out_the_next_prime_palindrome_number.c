#include<stdio.h>
int palin(int n){
    int r,s=0,t=n;
    while(n){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(t==s) return 1;
    else return 0;
}
int isprime(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);int t=n+1;
    while(1){
        if(palin(t)){
            if(isprime(t)){
                printf("%d",t);
                break;
            }
        }
        t++;
    }
    return 0;
}
