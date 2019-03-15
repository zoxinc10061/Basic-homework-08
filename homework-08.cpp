#include<stdio.h>
#include<conio.h>
int main() 
{ 

int i,j,n,m=0; 

printf("輸入 n ，求 1 ~ n 內的質數 ： "); 
scanf("%d",&n); 

for ( i = 2 ; i <= n ; i++) 
{ 
m =0; 

for ( j = 1 ; j <= n ; j++) 
{ 
if( (i % j) == 0 ) m++; 
if ( m > 2 ) break; 
} 
if ( m <= 2 ) printf("%d \t 是質數 !\n",i); 

} 
getch(); 
return 0; 

}
