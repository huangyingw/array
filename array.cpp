typedef char* pStr;
//#define pStr char* ;
int main(void)
{
	const int n=5;
	//int a[n];
	
	char string[4]="abc";
	const char *p1 = string;
	const pStr p2 = string;
	p1++;
	p2++;
	return 0;
}
