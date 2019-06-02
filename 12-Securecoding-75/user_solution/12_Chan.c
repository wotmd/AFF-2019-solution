#include<stdio.h>

int main(){
	int num,b;
	scanf("%d\n",&num);
	
	b=0;
	
	char a;
	
	while (1){
		scanf("%c",&a);
		getchar();
		b++;

		if(a=='q'){
			break;
		}
	}
	
	if(num>=b-1){
		printf("You can write them");
	}
	else{
		printf("You can't write them");

	}
}