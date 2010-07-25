#include <iostream>
using namespace std;

int main(void)
{
	int	a[2][3]={1,2,3,4,5,6}; 
	int	*b=a[0]; 
	cout < <b[0] < <endl; 
	cout < <b[1] < <endl; 
	b=a[1]; 
	cout < <b[0] < <endl; 
	cout < <b[1] < <endl; 
	return 0;
}
