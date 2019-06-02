#include<stdio.h>

int main(void)
{
	char a[1000];
	int total;
	scanf("%[^\n]",a);
	
	for(int i=0;a[i]!=NULL;i++)
	{
		total+=a[i];
	}
	printf("%d",total+10);	
}