#include<stdio.h>
#include<math.h>
int reverse(int);
int main(){
    int n,i,rem,bob;
    scanf("%d",&n);
     int sqr=n*n;
   int c=reverse(n);
    int sqr1=c*c;
    bob=reverse(sqr1);
    if(bob==sqr)
    printf("True");
    else
    printf("False");
    return 0;
}
int reverse(int n){
    int rev=0,rem;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
    
}





