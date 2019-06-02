#include <stdio.h>

int main()
{
	char a[5];
	int b;
	for (int i = 0; i < 5; i++)
		scanf_s("%c", &a[i]);

	scanf_s("%d", &b);

	for (int i = 0; i < 5; i++)
	{
		if (b == i)
			continue;
		printf("%c", a[i]);
	}

	

}
