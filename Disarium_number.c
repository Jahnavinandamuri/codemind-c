#include<stdio.h>
#include<math.h>
int digit(int);
int main(){
    int n,i,sum=0,rem;
    scanf("%d",&n);
     int bob=n;
    while(n!=0){
       i=digit(n);
        rem=n%10;
        sum=sum+(pow(rem,i));
        n=n/10;
    }
    if(bob==sum)
    printf("True");
    else
    printf("False");
    return 0;
}
int digit(int a){
    int count=0;
    while(a!=0){
        a=a/10;
        count++;
    }
    return count;
    
}