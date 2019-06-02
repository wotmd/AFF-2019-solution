#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	
	int num;
	int l=1;
	int o=1;
	int v=0;
	int e=3;
	double *total;
	double best=0.0;
	int j;
	char **str2;
	int i;
	str2= (char**)malloc(sizeof(char*)*21);
	scanf("%d",&num);
	total= (double*)malloc(sizeof(double)*num);
	for(i=0;i<num;i++)
	{
		l=1;
		o=1;
		v=0;
		e=3;
		str2[i]=(char*)malloc(sizeof(char)*21);
		scanf("%s",str2[i]);
		for(j=0;j<strlen(str2[i]);j++)
		{
			if(str2[i][j]=='L')
			{
				l= l+1;
			}
			if(str2[i][j]=='O')
			{
				o= o+1;
			}
			if(str2[i][j]=='V')
			{
				v= v+1;
			}
			if(str2[i][j]=='E')
			{
				e= e+1;
			}
		}
		total[i]=((l+o)*(l+v)*(l+e)*(o+v)*(o+e)*(v+e)) % 100;
	}
	
	for(i=0;i<num;i++)
	{
		if(best<total[i])
			best=total[i];
	}
	for(i=0;i<num;i++)
	{
		if(best==total[i])
		{
			printf("%s",str2[i]);
			break;
		}
	}
}