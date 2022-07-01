#include<stdio.h>
int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n,sum=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(isPrime(a[i])){
            sum+=a[i];
            c++;
        }
    }
    float avg=(float)sum/c;
    printf("%.2f",avg);
    return 0;
}