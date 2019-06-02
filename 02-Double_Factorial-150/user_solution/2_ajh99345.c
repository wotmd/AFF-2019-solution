#include <stdio.h>

int main(){
	int num;
	int i;
	int fac;
	int b;
	scanf("%d", &num);
	if (num%2==0){
		b = num/2-1;	
	}
	else
		b = num/2;
	if (num==0){
		fac = 1;
		}
	else if(0<num && num<20) {
		fac = 1;
		for(i=0; i<=b; i++){
		fac = fac*num;
    	num = num-2;
		}
	}
	else {
		fac = NULL;
	}
	printf("%d", fac);
	return 0;
}