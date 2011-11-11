#include <stdio.h>
#include <iostream>
using namespace std;

void array_copy(int array[], int len) 
{
  //int result[]=new int[len];
  //int *result=new int[len];
  int result[len];
  for (int i=0;i<len;i++)
  {
    result[i]=array[i];
  }
  int temp;
  temp=result[0];
  result[0]=result[1];
  result[1]=temp;
}

void array_uncopy(int array[], int len) 
{
  int temp;
  temp=array[0];
  array[0]=array[1];
  array[1]=temp;
}

void print_array(int array[], int len)
{
  for (int i=0;i<len;i++)
  {
    cout<<array[i]<<",";
  }
  cout<<endl;
}

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

  //a1[0]={1,2,3};

  int a[] = {4, 2, 5};

  print_array(a,sizeof(a)/sizeof(int));
  array_copy(a,sizeof(a)/sizeof(int));
  print_array(a,sizeof(a)/sizeof(int));

  cout<<endl;
  print_array(a,sizeof(a)/sizeof(int));
  array_uncopy(a,sizeof(a)/sizeof(int));
  print_array(a,sizeof(a)/sizeof(int));

  int a2[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  //print_array(a2,sizeof(a2)/sizeof(int));
  int a3[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
  int a4[3][4]={{1},{5},{9}};
  int a5[3][4]={{1},{0,6},{0,0,11}};
  int a6[3][4]={{1},{0,6},{0,0,11}};
  int a7[3][4]={{1},{5,6}};
  int a8[3][4]={{1},{},{9}};
  int a9[][4]={1,2,3,4,5,6,7,8,9,10,11,12};
  int a10[][4]={{0,0,3},{},{0,10}};
  return 0;
}
