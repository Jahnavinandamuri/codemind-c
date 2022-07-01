#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<m;i++){
         int max=0;
        for(int j=0;j<n;j++){
            if(a[j][i]>max){
                max=a[j][i];
            }
        }
        printf("%d
",max);
     }
     return 0;
    
}

