#include<stdio.h>
#include<conio.h>
int main() 
{ 

int i,j,n,m=0; 

printf("��J n �A�D 1 ~ n ������� �G "); 
scanf("%d",&n); 

for ( i = 2 ; i <= n ; i++) 
{ 
m =0; 

for ( j = 1 ; j <= n ; j++) 
{ 
if( (i % j) == 0 ) m++; 
if ( m > 2 ) break; 
} 
if ( m <= 2 ) printf("%d \t �O��� !\n",i); 

} 
getch(); 
return 0; 

}
