#include <stdio.h>

int main()
{
	int N;
	int total=0;
	char num=0;

	scanf("%d", &N);
	while (num != 'q')
	{
		scanf("%c", num);
		total += 1;
	}
	if (total > N)
		printf("You can't write them");
	else
		printf("You can write them");
}
