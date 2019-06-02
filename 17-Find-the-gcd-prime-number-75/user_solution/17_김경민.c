#include<stdio.h>
int isPrime(int N){
	int i;
	int count=0;
	for(i=N-1;i>1;i--){
		if(N%i==0){
			count++;
		}
	}
	if(count==0 && N>1){
		return 1;
	}
	else return 0;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int i;
	int temp;
	int result;
	int final;
	
	for(i=a;i>0;i--){
		if(a%i==0){
			temp=i;
			if(b%i==0){
				result=i;
				break;
			}
		}
	}
	final=isPrime(result);
	if(final==1){
		printf("%d\n",result);
	}
	else{
		printf("0\n");
	}
}