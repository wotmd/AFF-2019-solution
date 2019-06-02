#include<stdio.h>
int compare (void *first, void *second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else 
        return 0;
}
int main(){
	int N;
	int i;
	scanf("%d",&N);
	int ar[N];
	int result[N];
	int start_index=0;
	int end_index=N-1;
	for(i=0;i<N;i++){
		scanf("%d",&ar[i]);
	}
	qsort(ar, N,sizeof(int), compare);
	for(i=N-1;i>=0;i-=2){
		result[start_index]=ar[i];
		start_index++;
	}
	for(i=N-2;i>=0;i-=2){
		result[end_index]=ar[i];
		end_index--;
	}
	for(i=0;i<N;i++){
		printf("%d",result[i]);
		if(i!=N-1){
			printf(" ");
		}
	}
	return 0;
}