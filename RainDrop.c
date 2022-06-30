#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i%3==0){
        printf("Pling");
    }
    if(i%5==0){
        printf("Plang");
    }
    if(i%7==0){
        printf("Plong");
    }
    if(i%3!=0&&i%5!=0&&i%7!=0)
    printf("%d",i);
    return 0;
}