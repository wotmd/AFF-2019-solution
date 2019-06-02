#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WONUM 50

void main() {
	//알파벳 대문자로만 입력
	char* oh = "LEEJEONGJUN";
	char woman[WONUM][20];
	int wonum = 0;

	int lnum[WONUM], onum[WONUM], vnum[WONUM], eenum[WONUM];
	int allnum[WONUM];
	int max, maxnum;
	int count = 0;
	//scanf("%s", oh, sizeof(oh));
	scanf("%d", &wonum);
	for (int i = 0; i < wonum; i++) {
		scanf("%20s", woman[i]);
	}
	//비교
	for (int j = 0; j < wonum; j++) {
		lnum[j] = 0, onum[j] = 0, vnum[j] = 0, eenum[j] = 0;
		for (; *oh != '\0'; oh++) {							//LEEJEONGJUN LOVE갯수 : 1 1 0 3
			if (*oh == 'L') {
				lnum[j]++;
			}
			if (*oh == 'O') {
				onum[j]++;
			}
			if (*oh == 'V') {
				vnum[j]++;
			}
			if (*oh == 'E') {
				eenum[j]++;
			}
			count++;
		}
		for (int k = 0; woman[j][k] != '\0'; k++) {			//입력한 여성 이름 LOVE갯수
			if (woman[j][k] == 'L') {
				lnum[j]++;
			}
			if (woman[j][k] == 'O') {
				onum[j]++;
			}
			if (woman[j][k] == 'V') {
				vnum[j]++;
			}
			if (woman[j][k] == 'E') {
				eenum[j]++;
			}
		}
		oh = oh - count;								//포인터 위치옮겨주기
		count = 0;
		//사랑계산기에 식 넣기
		allnum[j] = ((lnum[j] + onum[j])*(lnum[j] + vnum[j])*(lnum[j] + eenum[j])*(onum[j] + vnum[j])*(onum[j] + eenum[j])*(vnum[j] + eenum[j])) % 100;
	}
	max = allnum[0];									//계산해서 가장 큰 값
	maxnum = 0;											//큰 값의 인덱스
	//printf("%d ", allnum[0]);
	for (int v = 0; v < wonum; v++) {
		//printf("%d ", allnum[v]);
		if (max < allnum[v]) {
			max = allnum[v];
			maxnum = v;
		}		
	}
	printf("%s", woman[maxnum]);
}
