#include <stdio.h>

int main(){
	int i,ans,n;
	ans =1;
	
	scanf("%d",&n);
	
	for (i = n;i>0;i=i-2){
		ans*=i;
	}
	
	printf("%d",ans);
	return 0;
}