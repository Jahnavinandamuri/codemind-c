#include<stdio.h>


int   main( )
{
int   beg, end, f, temp, i, j  ;
scanf("%d", &beg) ;
scanf("%d", &end) ;
for (   j = beg ;  j <= end ;  j++ )
{
f = 0 ;
for (i = 1 ;i < j ;i++) 
{
if (j % i == 0)
f = f + 1 ;
}
if (f == 1)
printf("%d
",j);
}
return 0;
}
