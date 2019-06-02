#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int k;
	int *people;
	int count = 0;
	int out = 0;
	int trial = 0;
	
	scanf("%d %d", &n, &k);
	
	people = (int *) malloc(sizeof(int) * n);
	
	int listlen = n;
	
	for (int j = 0; j < n; j++) {
		people[j];
	}
	
	while(out < n) {
		trial++;
		count++;
		if (trial > n) {
			trial = trial - n;
		}
		if (people[trial] == 1) {
			count--;
		}else if (count % k == 0) {
			people[trial] = 1;
			out++;
			if(out == n) {
				printf("%d ", trial);
			}else {
				printf("%d ",trial);
			}
		}
	}
	free(people);
}