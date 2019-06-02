#include <stdio.h>
#include <string.h>

void main(){
	char a[10000];
	gets(a);
	int b,i,len,k;
	scanf("%d",&b);
	k=0;
	len = strlen(a);
	
	for (i=0; i<len; i++){
		if(a[i] ==' '){
			continue;
		}
		else if (b == k){
			continue;
		}
		else{
			printf("%c",a[i]);
			k++;
		}
		
	}
}