#include<stdio.h>
int main(){
	char ar[1000];
	scanf("%[^\n]s",ar);
	int i;
	int start[100]={0,};
	int count_s=0;
	int count_e=0;
	int check=0;
	
	for(i=0;i<strlen(ar);i++){
		if(ar[i]=='('){
			start[count_s]++;
			count_s++;
		}
		if(ar[i]==')' && start[count_e]==1){
			start[count_e]--;
			count_e++;
		}
		else if(ar[i]==')'){
			check=1;
		}
	}
	for(i=0;i<strlen(ar);i++){
		if(start[i]!=0){
			check=1;
		}
	}
	if(check==0){
		printf("Correct Syntax!\n");
	}
	else{
		printf("Wrong Syntax!\n");
	}
	
}