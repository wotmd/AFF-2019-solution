#include<stdio.h>

int main(void)
{
	int N, K;
	int arr[1001];
	int num = 0;
	int i = -1, j = 0;
	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++)
		arr[i] = i+1;
	printf("<");
	for (int a = 0; a < N-1; a++)
	{
		for (int j = 0; j < K; j++)
		{
			i++;

			if (i == N)
				i = 0;

			if (arr[i] == 0)
			{
				j--;
				continue;
			}

		}
		printf("%d, ", arr[i]);
		arr[i] = 0;
	}
	for (int j = 0; j < K; j++)
	{
		i++;

		if (i == N)
			i = 0;

		if (arr[i] == 0)
		{
			j--;
			continue;
		}

	}
	printf("%d>", arr[i]);
	arr[i] = 0;
}