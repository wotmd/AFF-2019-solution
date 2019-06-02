#include <stdio.h>
#include <string.h>
void main() {
        int n;
        scanf("%d", &n);
//      char keyTable[24][4] = { {"ㄱ"},{"ㄴ"},{"ㄷ"},{"ㄹ"},{"ㅁ"},{"ㅂ"},{"ㅅ"},{"ㅇ"},{"ㅈ"},{"ㅊ"},{"ㅋ"},{"ㅌ"},{"ㅍ"},{"ㅎ"},{"ㅏ"},{"ㅑ"},{"ㅓ"},{"ㅕ"},{"ㅗ"},{"ㅛ"},{"ㅜ"},{"ㅠ"},{"ㅡ"},{"ㅣ"}};

        char keyTable[24][4] = {"ㄱ","ㄴ","ㄷ","ㄹ","ㅁ","ㅂ","ㅅ","ㅇ","ㅈ","ㅊ","ㅋ","ㅌ","ㅍ","ㅎ","ㅏ","ㅑ","ㅓ","ㅕ","ㅗ","ㅛ","ㅜ","ㅠ","ㅡ","ㅣ"};
        char input[50][4] = {"\0" };

        for(int i=0; i<n; i++) {
                scanf("%s", input[i]);
        }
        int key;
        scanf("%d", &key);
        for(int i=0; i<n; i++) {
                for(int j = 0; j<24; j++) {
                        if(!strcmp(input[i], keyTable[j])) {
                                printf("%s",keyTable[(j+key)%24]);
                        }
                }
        }
}
