#include<stdio.h>
#include<string.h>

void Delete(char *ar, int idx){
    memmove(ar+idx,ar+idx+1,strlen(ar)-idx);
}

int main() {
    char array[5]= {};
    char delete = "";
    char result = "";
    scanf("%c %c %c %c %c",array[0],array[1],array[2],array[3],array[4]);
    scanf("%d", &delete);
    Delete(ar,delete);
    for( int i=0; i<strlen(array); i++ ) {
         strcat(result,array[i]);
    }
    printf("%s",result);

    result 0;

}