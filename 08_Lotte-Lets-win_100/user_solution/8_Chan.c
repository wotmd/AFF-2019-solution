#include <stdio.h>

int main(){
	int l,h,i,ans,k;
	scanf("%d %d",&l,&h);
	
	ans =1;
	
	int a = 7-l-h;
	
	int b = 4 - l;
	
	for (i=1; i<a+1;i++){
		ans *=i;		
	}
	k=ans;
	ans =1;
	for (i=1;i<b+1;i++){
		ans *=i;
	}
	k =k/ans;
	ans =1;
	for (i=1;i<a-b+1;i++){
		ans *=i;
	}
	k=k/ans;
	
	printf("%d",k);
	return 0;
}