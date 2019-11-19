#include<stdio.h>
int main()
{
	char czary[]={'A','B','R','A','K','A','D','A','B','R','A'};
	for( int i=0; i<11; i++)
		{
		for(int j=0; j<=i; j++)
			printf(" ");
		for(int k=0; k<11-i; k++)
			printf("%c ", czary[k]);
			printf("\n");
			}
	return 0;
}
