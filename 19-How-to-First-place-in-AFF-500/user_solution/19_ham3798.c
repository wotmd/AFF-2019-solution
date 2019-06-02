#include<stdio.h>
void sort(int arr[1000], int day)
{
	int temp;
	int abc;

	for (int i = 0; i < day - 1; i++)
	{
		for (int j = i + 1; j < day; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main(void)
{
	int day;
	int total;
	int d=0, e=0, f=0;
	int a[1000];
	int b[1000];
	int c[1000];

	int* str1=a;
	int* str2=b;
	int* str3=c;

	scanf("%d", &day);
	for (int i = 0; i < day; i++)
		scanf("%d", a + i);
	for (int i = 0; i < day; i++)
		scanf("%d", b + i);
	for (int i = 0; i < day; i++)
		scanf("%d", c + i);
	sort(a, day);
	sort(b, day);
	sort(c, day);

	for (int i = 0; i < day; i++)
	{

		if (*str1 >= * str2 && *str1 >= * str3&&d!=2)
		{
			total += *str1;
			str1 = str1 + 1;
			d++;
			e = 0;
			f = 0;
			continue;
		}
		else if (*str2 >= * str1 && *str2 >= * str3&&e!=2)
		{
			total += *str2;
			str2 = str2 + 1;
			d=0;
			e++;
			f = 0;
			continue;
		}
		else if (*str3 >= * str1 && *str3 >= * str2&&f!=2)
		{
			total += *str3;
			str3 = str3 + 1;
			d = 0;
			e = 0;
			f++;
			continue;
		}

		if (d == 2)
		{
			if (*str2 >= * str3)
			{
				total += *str2;
				str2 = str2 + 1;
				d = 0;
				e++;
				f = 0;
				continue;
			}
			else
			{
				total += *str3;
				str3 = str3 + 1;
				d = 0;
				e = 0;
				f++;
				continue;
			}
		}
		else if (e == 2)
		{
			if (*str1 >= * str3)
			{
				total += *str1;
				str1 = str1 + 1;
				d++;
				e = 0;
				f = 0;
				continue;
			}
			else
			{
				total += *str3;
				str3 = str3 + 1;
				d = 0;
				e = 0;
				f++;
				continue;
			}
		}
		else if (f == 2)
		{
			if (*str1 > * str2)
			{
				total += *str1;
				str1 = str1 + 1;
				d++;
				e = 0;
				f = 0;
				continue;
			}
			else
			{
				total += *str2;
				str2 = str2 + 1;
				d = 0;
				e++;
				f = 0;
				continue;
			}
		}
		printf("asdfasdf");
	}

	printf("%d", total);
}
