#include<stdio.h>
int fact(int N){
	if(N==0) return 1;
	else if(N==1) return 1;
	else return N*fact(N-1);
}
int combi(int n, int c){
	int result=fact(n)/(fact(c)*fact(n-c));
}
int main(){
	int left=7;
	int win,lose;
	int result;
	scanf("%d %d",&win,&lose);
	int towin=4-win;
	left=left-(win+lose);
	result=combi(left,towin);
	printf("%d",result);
}