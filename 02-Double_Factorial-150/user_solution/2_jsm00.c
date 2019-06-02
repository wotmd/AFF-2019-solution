#include <stdio.h>

void main()
{
	int num;
	int i=0;
	int total=1;
	
	
	scanf("%d", &num);
	if(num<20&&num>=0)
	{
		
		if(num==0)
		{
			total=1;
		}
		else
		{	
			for(i=0;num>i;)
			{
				total = total*num;
				num = num-2;
			}
		}
		printf("%d\n",total);
	}
}