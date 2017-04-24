#include<stdio.h>
#include <math.h>
#include"include/f.h"

int Board[1050][1050],tile=0;

int main(void)
{
	int n,dr,dc,i,j,t;
	scanf("%d",&t);
	n=(int)pow(2,t);
	scanf("%d %d",&dr,&dc);
	f(0,0,dr-1,dc-1,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
			printf("%d ",Board[i][j]);
		printf("%d\n",Board[i][j]);
	}
	return 0;
}