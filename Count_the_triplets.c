#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    
    while(t--){
        int n,c=0,flag=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++){
            for(int j=0;j<n && j!=i;j++){
                for(int k=0;k<n ;k++){
                    if(a[i]+a[j]==a[k]) {
                        c++; flag=1;
                    }
                }
            }
        }
        if(flag==0) printf("-1
");
        else
        printf("%d
",c);
        
    }
    return 0;
}