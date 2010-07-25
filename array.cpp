#include <stdio.h>
#include <iostream>
using namespace std;

int main(void)
{
	int	a[2][3]={1,2,3,4,5,6}; 
	int	*b=a[0]; 
	cout <<b[0] <<endl; 
	cout <<b[1] <<endl; 
	b=a[1]; 
	cout <<b[0] <<endl; 
	cout <<b[1] <<endl; 
	
	int	a1[2][3]={6,5,4,3,2,1}; 
  printf( "%d   :   %d\n ",a1,sizeof(a1));//a1 
  printf( "%d   :   %d\n ",*a1,sizeof(*a1));//*a1 
  printf( "%d   :   %d\n ",a1[0],sizeof(a1[0]));//*a1 
  printf( "%d   :   %d\n ",*(a1+1),sizeof(*(a1+1)));//*(a1+1) 
  printf( "%d   :   %d\n ",a1[1],sizeof(a1[1]));//*(a1+1) 
  printf( "%d   :   %d\n ",**a1,sizeof(**a1));//a1[0][0]=6 
  printf( "%d   :   %d\n ",*a1[0],sizeof(*a1[0]));//a1[0][0]=6 
  printf( "%d   :   %d\n ",*(*(a1+1)+1),sizeof(*(*(a1+1)+1)));//a1[1][1]=2 
  printf( "%d   :   %d\n ",*(*a1+1),sizeof(*(*a1+1)));//a1[0][1]=5 
  printf( "%d   :   %d\n ",**(a1+1),sizeof(**(a1+1)));//a1[1][0]=3 
  printf( "%d   :   %d\n ",*a1[1],sizeof(*a1[1]));//a1[1][0]=3 
  printf( "%d   :   %d\n ",&a1,sizeof(&a1));//&a1[0][0] 
  printf( "%d   :   %d\n ",&a1[0],sizeof(&a1[0]));//&a1[0][0]
  
	return 0;
}
