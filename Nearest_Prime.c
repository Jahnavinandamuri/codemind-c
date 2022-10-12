#include<stdio.h>
bool isPrime(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int t=n,x=n,a,b;
        while(1){
            if(isPrime(t)){
                a=t;
                break;
            }
            t++;
        }
        while(1){
            if(isPrime(x)){
                b=x;
                break;
            }
            x--;
        }
        if((a-n)>(n-b)) printf("%d
",b);
        else if((a-n)==(n-b)){
            if(a>b) printf("%d
",b);
            else printf("%d
",a);
        }
        else printf("%d
",a);
    }
    return 0;
}