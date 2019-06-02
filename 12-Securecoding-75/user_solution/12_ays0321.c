#include <stdio.h>
  
int main(){
        int a,c = 0,i;
        char b[100000];
        scanf("%d",&a);
        for(i=0; i>=0; i++){
                scanf("%c",&b[i]);
                if(b[i] == 'q'){
                        c--;
                        break;
                }
                c++;
        }
        if(c>a){
                printf("You can't wirte them\n");
        }else {
                printf("You can write them\n");
        }
}