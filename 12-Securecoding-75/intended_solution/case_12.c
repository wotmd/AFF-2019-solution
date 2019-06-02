#include <stdio.h>

int main(){
	int array_len=101;
	int input_count = 0;
	char empty;
	char int_array[100];
	int i = -1;
	int scan=0;
	scanf("%d", &array_len);

	do{
		i = i + 1;
        scanf(" %c", &int_array[i]);
    } while (int_array[i] != 'q');
	if( array_len < i)
		printf("%s\n", "You can't write them");
	else{
		printf("%s\n", "You can write them");
	}
	return 0;
}

