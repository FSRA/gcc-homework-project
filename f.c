#include"include/f.h"
int f(int tr,int tc,int dr,int dc,int size)
{
	int t,s;
	if(size==1)
		return 1;
	tile++;
	t=tile;
	s=size/2;
	if(dr<tr+s && dc<tc+s)
		f(tr,tc,dr,dc,s);
	else
	{
		Board[tr+s-1][tc+s-1]=t;
		f(tr,tc,tr+s-1,tc+s-1,s);
	}

	if(dr<tr+s && dc>=tc+s)
		f(tr,tc+s,dr,dc,s);
	else
	{
		Board[tr+s-1][tc+s]=t;
		f(tr,tc+s,tr+s-1,tc+s,s);
	}

	if(dr>=tr+s && dc<tc+s)
		f(tr+s,tc,dr,dc,s);
	else
	{
		Board[tr+s][tc+s-1]=t;
		f(tr+s,tc,tr+s,tc+s-1,s);
	}

	if(dr>=tr+s && dc>=tc+s)
		f(tr+s,tc+s,dr,dc,s);
	else
	{
		Board[tr+s][tc+s]=t;
		f(tr+s,tc+s,tr+s,tc+s,s);
	}
}