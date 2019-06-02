#include<stdio.h>
int main(){
	char ar[20];
	int i;
	int sum=10;
	scanf("%[^\n]s",ar);
	//printf("%s",ar);
	for(i=0;i<strlen(ar);i++){
		sum+=(int)ar[i];
	}
	printf("%d",sum);
} 