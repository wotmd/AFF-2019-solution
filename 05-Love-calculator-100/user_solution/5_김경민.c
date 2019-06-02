#include<stdio.h>
int main(){
	int N,i,j;
	scanf("%d",&N);
	char one[N][20];
	int result[N];
	int L,O,V,E;
	int max=0;
	
	for(i=0;i<N;i++){
		L=1;
		O=1;
		V=0;
		E=3;
		scanf("%s",&one[i]);
		for(j=0;j<strlen(one[i]);j++){
			if(one[i][j]=='L') L++;
			if(one[i][j]=='O') O++;
			if(one[i][j]=='V') V++;
			if(one[i][j]=='E') E++;
		}
		//printf("%d %d %d %d",L,O,V,E);
		result[i]=((L+O)*(L+V)*(L+E)*(O+V)*(O+E)*(V+E))%100;
		if(result[i]>max) max=result[i];
	}
	//printf("%d",max);
	for(i=0;i<N;i++){
		if(result[i]==max){
			printf("%s",one[i]);
			break;
		}
	}
	
}