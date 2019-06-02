#include<stdio.h>
int main(){
	char c1,c2,c3,c4,c5;
	int ar[5];
	int i;
	int dlt;
	
	for(i=0;i<5;i++){
		scanf("%s", &ar[i]);
	}
	scanf("%d", &dlt);
	for(i=0;i<5;i++){
		if(i!=(dlt-1)){
			printf("%c",ar[i]);
		}
	}
}