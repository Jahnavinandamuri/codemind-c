#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        int f=0;
        for(int i=1;i<=n;i++){
            int sum=0;
            for(int j=i;j<=n;j++){
                sum+=a[j];
                if(sum>k)
                break;
                if(sum==k){
                    printf("%d %d
",i,j);
                    f=1;
                    break;
                }
            }
            if(f==1){
                break;
            }
        }
        if(f==0)
        printf("-1
");
    }
    return 0;
}



















































