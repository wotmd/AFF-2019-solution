#include<stdio.h>

int main(void)
{
	char arr1[36];
	char arr2[36];
	int result=0;

	scanf("%s", arr1);
	scanf("%s", arr2);
	
	for(int i=0;i<35;i++)
	{
		if(arr2[i]=='.')
			continue;
		if (arr2[i]=='0')
			result=1;
		
		if(result==1&&arr2[i]=='1')
		{
			result=-1;
			break;
		}		
	}
	
	if(result==-1)
		printf("wrong subnetmask");
	else
	{
		for(int i=0;i<35;i++)
		{
			if(arr2[i]=='.')
			{
				printf(".");
				continue;
			}
			if(arr1[i]=='1'&&arr2[i]=='1')
				printf("1");
			else
				printf("0");
		}
	}
}