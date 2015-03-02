#include<stdio.h>
#include<conio.h>
void main()
{
int A[10];
int i , j , b;
clrscr();
//Getting input from user
for(i=0 ; i<10 ; i++)
{
printf(" Enter the Number %d :" , i+1 );
scanf("%d" , &A[i] );
}
//sorting the array
for(i=0 ; i<10 ; i++)
{
for(j=i ; j<10 ; j++)
{
if(A[i] < A[j])
{
b = A[j] ;
A[j] = A[i] ;
A[i] = b ;
}
}
}

printf(" Largest Number is : %d\n" , A[0] );
printf(" Second Largest Number is : %d\n" , A[1] ); 
getch(); 
}
