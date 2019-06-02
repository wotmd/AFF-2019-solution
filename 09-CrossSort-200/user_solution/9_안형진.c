#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;   
    int num2 = *(int *)b;   
    
    if (num1 < num2)  
		return 1;    
    
    if (num1 > num2) 
        return -1;      
		    
    return 0; 
}

int cross(int* num, int n) {
	int a = (n+1) / 2;
	int k = 0;
	
	for(int i = 0; i < a; ++i) {
		printf("%d ", *(num+k));
		k += 2;
	}
/*
6 5 4 3 2 1
0 1 2 3 4 5

5 4 3 2 1
0 1 2 3 4
*/
	if (n % 2 == 0) {
		k = n - 1;
	}else {
		k = n - 2;
	}
	for(int i = 0; i < n - a - 1; ++i) {
		printf("%d ", *(num+k));
		k -= 2;
	}
	if(n > 1) {
		printf("%d", *(num+k));
	}
}
int main(void) {
	int n;
	
	int *num;
	
	scanf("%d", &n);
	
	num = (int *) malloc(sizeof(int) * n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", num+i);
	}
	
	qsort(num, n, sizeof(int), compare);
	
	cross(num, n);
	
	free(num);
}