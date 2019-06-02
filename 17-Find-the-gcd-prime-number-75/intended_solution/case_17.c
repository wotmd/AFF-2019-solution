#include <stdio.h>

int main(){
	int a = 0;
	int b = 0;
	int i = 0;
	int min = 0;
	int div = 1;
	scanf("%d", &a);
       	scanf("%d", &b);
	min = a > b ? b : a ;
	

	if( a< 1 || b < 1){
		return 0;
	}
	for( i = 1 ; i <= min; i++){
		if( ( a % i ) == 0 && ( b % i ) == 0){
			div = i;
		}
	}
	
	for( i = 2; i < div ; i++){
		if( div % i == 0){
			printf("0\n");
			return 0;
		}	
	}
	if(div == 1){
		printf("0\n");
		return 0;
	}

	printf("%d\n", div);
}


