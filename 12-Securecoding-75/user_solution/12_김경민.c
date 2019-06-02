#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int temp=N;
	int i=0;
	
	while(1){
		char ar;
		scanf("%s",&ar);
		i++;
		if(ar=='q') break;
	}
	if(i-1<=temp){
		printf("You can write them");
	}
	else{
		printf("You can't write them");
	}
}