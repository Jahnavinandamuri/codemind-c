#include<stdio.h>
int factorSum(int n){
    int sum=0,i;
    for(i=1;i<n;i++){
        if(n%i==0)
        sum+=i;
    }
    return sum;
}
int main(){
    int n,m;
    scanf("%d
%d",&n,&m);
    int a=factorSum(n);
    int b=factorSum(m);
    if(a==m && b==n)
    printf("Amicable");
    else
    printf("Not Amicable");
    return 0;
}