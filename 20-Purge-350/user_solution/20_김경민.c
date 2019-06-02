#include<stdio.h>
int check(int standard){
	if(standard==1) return 1;
	else return 0;
}
int main(void){
	int N,K;
	int end=0;
	int count=0;
	int verdict=0;
	int i,j,k;
	scanf("%d %d",&N,&K);
	int temp=K;
	int result[N];
	int ar[N];
	int exit=0;
	for(i=0;i<N;i++) ar[i]=1;
	while(1){
		end=0;
		for(j=0;j<N;j++){
			if(ar[j]==0)	end++;
		}
		if(end==N)	break;
		for(k=exit;k<exit+temp;k++){
			verdict=check(ar[k%(N)]);
			if(verdict==0) temp++;
		}

		ar[(exit+temp-1)%N]=0;
		result[count]=(exit+temp)%N;
		if((exit+temp)%N==0) result[count]=N;
		exit+=temp;
		temp=K;
		count++;
	}
	for(i=0;i<N;i++){
		if(i!=N-1)  printf("%d ",result[i]);
		else printf("%d",result[i]);
		}
}