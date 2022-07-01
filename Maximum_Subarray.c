#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum=a[0],sum1=a[0];
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum>sum1){
                sum1=sum;
            }
        }
    }
    printf("%d",sum1);
    return 0;
}