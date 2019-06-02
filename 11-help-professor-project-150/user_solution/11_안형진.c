/*
0~10점대 : 2명
10~20점대 : 2명
20~30점대 : 2명
30~40점대 : 1명
40~50점대 : 1명
50~60점대 : 2명
60~70점대 : 3명
70~80점대 : 2명
80~90점대 : 4명
90~100점대 : 1명

가장 많은 점수대에 분포해있는 점수는 80~90점대이고, 4명이 분포되어있습니다. 

가장 높은 점수를 받은 김도희 학생의 점수는 100점입니다.
가장 낮은 점수를 받은 강자구 학생의 점수는 2점입니다.

전체 학생들의 평균 점수는 53.3점 입니다.
교수님 도와드리기 프로젝트 완료!
*/
#include <stdio.h>

int main(void) {
	
	int num;
	scanf("%d", &num);
	char n[20][3];
	int s[20];
	int sum = 0;
	int score[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int maxScore = 0;
	int maxIndex;
	int minScore = 100;
	int minIndex;
	
	for(int i = 0; i < num; i++) {
		scanf("%s%d", n[i], &s[i]);
		scanf(""); 
		sum += s[i];
		score[s[i]/10]++;
		if(s[i] > maxScore) {
			maxScore = s[i];
			maxIndex = i;
		}
		if(s[i] < minScore) {
			minScore = s[i];
			minIndex = i;
		}
		if(s[i] == 100) score[9]++;
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d~%d점대 : %d명\n", i*10, (i+1)*10, score[i]);
	}
	
	int max = 0;
	int index;
	
	for(int i = 0; i < 10; i++) {
		if(score[i] > max) {
			max = score[i];
			index = i;
		}
	}
	printf("\n가장 많은 점수대에 분포해있는 점수는 %d~%d점대이고, %d명이 분포되어있습니다.\n\n", index*10, (index+1)*10, score[index]);
	
	printf("가장 높은 점수를 받은 %s 학생의 점수는 %d점입니다.\n", n[maxIndex], maxScore);
	printf("가장 낮은 점수를 받은 %s 학생의 점수는 %d점입니다.\n\n", n[minIndex], minScore);
	printf("전체 학생들의 평균 점수는 %.1f점 입니다.\n", double(sum)/num);
	printf("교수님 도와드리기 프로젝트 완료!");
}