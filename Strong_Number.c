#include<stdio.h>
int factorial(int n);
int main(){
    int n;int sum=0,a,b,rem=0,count=1;
    scanf("%d",&n);
  b=n;
    while(n>0){
        rem=n%10;
        n/=10;
       a=factorial(rem);
       sum=a+sum;
       
    }
    if(sum==b)
    printf("The number %d is a strong number",b);
    else
    printf("The number %d is not a strong number",b);
    return 0;
}
  int factorial(int n){
        int i,fact=1;
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        return fact;
    }
