#include<stdio.h>
int main(){
	int check_one=0,check_two=0;
	int error=0;
	int i;
	char sub[3][36];
	scanf("%s",sub[0]);
	scanf("%s",sub[1]);
	for(i=0;i<35;i++){
		
		if(sub[1][i]=='0'){
			check_two=1;
		}
		if(sub[1][i]=='.'){
			check_two=0;
		}
		if(check_two==1 && sub[1][i]=='1'){
			error++;
		}
	}
//	printf("%d\n",error);
	if(error!=0){
		printf("wrong subnetmask");
	}
	else{
		for(i=0;i<35;i++){
			if(sub[0][i]=='1' && sub[1][i]=='1'){
				sub[2][i]='1';
			}
			else if(sub[0][i]=='.' && sub[1][i]=='.'){
				sub[2][i]='.';
			}
			else{
				sub[2][i]='0';
			}
		}
		printf("%s",sub[2]);
	}
	
}