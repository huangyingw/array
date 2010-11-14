#include <stdio.h>
#include <iostream>
using namespace std;

int main(void)
{
  int	a1[2][3]={6,5,4,3,2,1};
  printf( "%d   :   %d\n ",a1,sizeof(a1));//a1	-1075833576   :   24
  printf( "%d   :   %d\n ",*a1,sizeof(*a1));//*a1	-1075833576   :   12
  printf( "%d   :   %d\n ",a1[0],sizeof(a1[0]));//*a1	-1075833576   :   12
  printf( "%d   :   %d\n ",*(a1+1),sizeof(*(a1+1)));//*(a1+1)	-1075833564   :   12
  printf( "%d   :   %d\n ",a1[1],sizeof(a1[1]));//*(a1+1)	-1075833564   :   12
  printf( "%d   :   %d\n ",**a1,sizeof(**a1));//a1[0][0]=6	6   :   4
  printf( "%d   :   %d\n ",*a1[0],sizeof(*a1[0]));//a1[0][0]=6	6   :   4
  printf( "%d   :   %d\n ",*(*(a1+1)+1),sizeof(*(*(a1+1)+1)));//a1[1][1]=2	2   :   4
  printf( "%d   :   %d\n ",*(*a1+1),sizeof(*(*a1+1)));//a1[0][1]=5	5   :   4
  printf( "%d   :   %d\n ",**(a1+1),sizeof(**(a1+1)));//a1[1][0]=3	3   :   4
  printf( "%d   :   %d\n ",*a1[1],sizeof(*a1[1]));//a1[1][0]=3	3   :   4
  printf( "%d   :   %d\n ",&a1,sizeof(&a1));//&a1[0][0]	-1075833576   :   4
  printf( "%d   :   %d\n ",&a1[0],sizeof(&a1[0]));//&a1[0][0]	-1075833576   :   4

  return 0;
}
