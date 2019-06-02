#include <stdio.h>

int main(){
	int indexMax,temp,i,j,num;
	int a=0;
	int b=1;
	scanf("%d",&num);
	
	int data[31];
	int ans[31];
	for (i=0;i<num;i++){
		
		scanf("%d",&data[i]);
		
	}
		
	for (i=0;i<num-1;i++){
		indexMax =i;
		
		for (j= i+1;j<num;j++){
			if(data[j]>data[indexMax]){
				indexMax = j;
			}
		}
		temp = data[indexMax];
		data[indexMax] = data[i];
		data[i] = temp;
	}
	
	for (i=0;i<num;i++){
		if(i%2 ==1){
		ans[num-b]=data[i];
		b++;
	}
	else{
		ans[a]=data[i];
		a++;
	}
	}
	for (i=0; i<num;i++){
		printf("%d",ans[i]);
		if(i == num-1){
			break;
		}
		printf(" ");
		
	}
	return 0;
}