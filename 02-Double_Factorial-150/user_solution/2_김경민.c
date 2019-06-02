#include<stdio.h>
int fac(int N){
	if(N==0||N==1){
		return 1;
	}
	else{
		return N*fac(N-2);
	}
}
int main(){
	int i;
	int scan;
	int result;
	
	scanf("%d",&scan);
	result=fac(scan);
	
	printf("%d",result);
}