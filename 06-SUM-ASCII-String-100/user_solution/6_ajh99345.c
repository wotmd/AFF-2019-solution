#include <stdio.h>
#include <string.h>

int str_sum(char *);

int main()
{
	char *a = "abcdefgx";

	int sum = str_sum(a);

	printf("sum of ascii code : \"%s\"  ===>  %d\n\n", a, sum);
}

int str_sum(char *str)
{
	int sum = 0;
	int len = strlen(str);

	for (int i = 0; i < len ; i++)
	{
		char *pos = str + i;  
		sum += (int)(*pos);  
		
		printf("%c %d %x %#x %X %#X \n", *pos, *pos, *pos, *pos, *pos, *pos);  

	return sum;
}