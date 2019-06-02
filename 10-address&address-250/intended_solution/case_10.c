#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ispossible(char *address);
void subneting(char *ip, char *subnetmask, char *output);

int main()
{
	char ip[36];
	char subnetmask[36];
	char subneted[36];

	scanf("%s", ip);
	scanf("%s", subnetmask);
	
	if (!ispossible(subnetmask))
	{
		printf("wrong subnetmask");
	}
	else
	{
		subneting(ip, subnetmask, subneted);
		printf("%s", subneted);
	}

	return 0;
}

int ispossible(char *address)
{
	int i;

	for (i = 0; i < 34; i++)
	{
		if (*(address + i) == '.')
		{
			if (*(address+i-1) == '0' && *(address+i+1) == '1')
			{
				return 0;
			}
		}
		if (*(address+i) == '0' && *(address+i+1) == '1')
		{
			return 0;
		}
	}
	return 1;
}

void subneting(char *ip, char *subnetmask, char *output)
{
	int i;

	for (i = 0; i < strlen(ip); i++)
	{
		if (*(ip + i) == '.')
		{
			*(output + i) = '.';
		}
		else
		{
			if (*(subnetmask+i) == '1')
			{
				*(output + i) = *(ip+i);
			}
			else
			{
				*(output + i) = '0';
			}
		}
	}
	*(output + i) = '\0';
}
