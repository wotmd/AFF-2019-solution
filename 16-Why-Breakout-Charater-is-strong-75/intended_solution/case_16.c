#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=6;
	int remove_target = -1;
	char* array;
	int i =0;
	
	array = (char *) malloc( a * sizeof(char));
	scanf("%c %c %c %c %c", array, array+1, array+2, array+3, array+4);
	scanf(" %d", &remove_target);
	if( remove_target < 0 || remove_target >= a){
		return 0;
	}
	for( i = (remove_target -1); i < a-1; i++){
		array[i] = array[i+1];
	}
	array[i] = 0;
	for( i = 0; i < a-1; i++){
		printf("%c", array[i]);
	}


	free(array);	


}

