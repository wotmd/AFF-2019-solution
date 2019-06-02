#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int num;
	int i;
	char *str;
	char str1;
	str=(char*)malloc(sizeof(char)*100);
	scanf("%d",&num);
	
	for(i=0;i<100;i++)
	{	
		scanf("%c",&str1);
		if(str1=='q')
		{
			str[i]=str1;
			break;
		}
		else
		{
			str[i]=str1;
		}
	}
	for(i=0;i<100;i++)
	{
		if(str[i]=='q')
		{
			if(i>(num+1)*2)
			{	
				printf("You can't write them");
			}
			else
			{
				printf("You can write them");
			}
		}
	}
	
}