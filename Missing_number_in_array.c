#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,sum=0;
        scanf("%d",&n);
        int total=n*(n+1)/2;
        int a[n],x=0,y=0;
        for(int i=0;i<n-1;i++)
        scanf("%d ",&a[i]);
       
        for(int i=0;i<n-1;i++){
          sum+=a[i];
        }
        printf("%d
",total-sum);
    }
    return 0;
}
