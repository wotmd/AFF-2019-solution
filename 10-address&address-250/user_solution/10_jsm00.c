#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char *str;
	char *str1;
	int a=1;
	int i;
	int j;
	int k;
	
	str=(char*)malloc(sizeof(char)*36);
	str1=(char*)malloc(sizeof(char)*36);
	
	scanf("%s",str);
	scanf("%s",str1);
	for(k=0;k<36;k+=9)
	{
		for(i=k;i<8+k;i++)
		{
			if(str1[i]=='0')
			{
				for(j=i;j<9+k;j++)
				{
					if(str1[j]=='1')
					{
						a=0;
					}
				}
			}
		}
	}	
	if(a)
	{
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]=='1'&&str1[i]=='1')
			{
				printf("1");
			}
			else if(str[i]=='0'||str1[i]=='0')
			{
				printf("0");
			}
			else
			{
				printf(".");
			}
		}
	}
	else
	{
		printf("wrong subnetmask");
	}
}