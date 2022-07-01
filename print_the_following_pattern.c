#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        char ch=64;
        for(j=1;j<=i;j++){
            printf("%c ",ch+i);
        }
        printf("
");
    }
    return 0;
}

