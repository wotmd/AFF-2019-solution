#include<stdio.h>
  
int main(){
        int num;
        printf("입력 예시1\n");
        for(int i =0; i<100; i++){
                scanf("%ls",&num);
                if(num == 'q'){
                        printf("\n");
                        if(i+1 >= 1){
                                printf("출력 예시1\nYou can write them\n");
                                printf("\n");
                                printf("\n");
                                break;
                        }
                        else if(i+1 < 1){
                                printf("출력 예시1\nYou can't write them\n");
                                printf("\n");
                                printf("\n");
                                break;
                        }

                }
        }
        num=0;
        printf("입력 예시2\n");
        for(int i =0; i<100; i++){
                scanf("%ls",&num);
                if(num == 'q'){
                        printf("\n");
                        if(i+1 >= 2){
                                printf("출력 예시2\nYou can write them");
                                break;
                        }
                        else if(i+1 < 2){
                                printf("출력 예시2\nYou can't write them");
                                break;
                        }

                }
        }


}
