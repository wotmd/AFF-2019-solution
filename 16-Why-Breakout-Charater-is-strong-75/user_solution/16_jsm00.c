#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int i;
	int b=1;
	char a;
	char *ch;
	int num;
	
	ch=(char*)malloc(sizeof(char)*6);
	for(i=0;i<5;i++)
	{
		scanf("%s", &a);
		ch[i]=a;
	}
	scanf("%d", &num);
	
	for(i=0;i<strlen(ch);i++)
	{
		if(i==num-1)
		{
			b=0;
		}
		if(b)
		{
			printf("%c",ch[i]);
		}
		b=1;
	}
}