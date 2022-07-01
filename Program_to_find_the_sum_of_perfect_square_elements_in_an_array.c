#include<stdio.h>
#include<math.h>
int perfect(int n){
    int t=n;
    int a=sqrt(n);
    if(a*a==t){
        return 1;
    }
    else
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(perfect(a[i])){
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}
