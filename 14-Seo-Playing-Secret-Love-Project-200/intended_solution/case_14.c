#include<stdio.h>
#include<string.h>

int main(void) {
        char hangeul[24][4] = {"ㄱ","ㄴ","ㄷ","ㄹ","ㅁ","ㅂ","ㅅ","ㅇ","ㅈ","ㅊ","ㅋ","ㅌ","ㅍ","ㅎ","ㅏ","ㅑ","ㅓ","ㅕ","ㅗ","ㅛ","ㅜ","ㅠ","ㅡ","ㅣ"};        //사전
        char p[50][4] = {"\0"}; //plain text
        int num = 0, key=0;             //num : 입력할 문자 수, key : 암호화를 위한 key값
        scanf("%d", &num);
        int i = 0, j=0;
        for (i = 0; i < num; i++) {
                scanf("%s", p[i]);
        }

        scanf("%d", &key);

        for (i = 0; i < num; i++) {
                for (j = 0; j < 24; j++) {
                        if (strcmp(p[i], hangeul[j])==0) {              //(평문에서의 문자==사전에서의 문자)인 경우
                                int k = (j + key) % 24;                         //나머지 연산을 이용하여, 사전의 인덱스 23을 넘어도 순회하도록
                                strcpy(p[i], hangeul[k]);                       //평문을 바꿔줌
                                break;                                                          //바꾸고 나면 다음 평문의 문자를 비교하기위해 break
                        }
                }
        }

        for (i = 0; i < num; i++) {                     //출력
                printf("%s", p[i]);
        }
        return 0;
}

