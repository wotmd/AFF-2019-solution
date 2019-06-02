#include<stdio.h>
  
int  main(){
        int s, c;
        int result = 1;
        printf("입력\n");
        scanf("%d",&s);
        c = s;
        if(s %2==0){
        for(int i=0; i<(c/2); i++){
        result = result * s;
        s = s-2;
        if(s==0){
                s = 1;
        }

        }

        }
        else if(s % 2 == 1){
        for(int i=0; i<(c+1)/2; i++){
        result = result * s;
        s = s-2;
        }
        }
        printf("\n출력\n");
        printf("%d",result);
}
