#include <stdio.h>

struct test {
   char name[10]; //학생들의 이름
   int score; //학생들의 점수
};

//전역변수로 사용해야 함
int to10[20], to20[20], to30[20], to40[20], to50[20], to60[20], to70[20], to80[20], to90[20]; //if 문으로 점수 넣기
int up1 = 0, up2 = 0, up3 = 0, up4 = 0, up5 = 0, up6 = 0, up7 = 0, up8 = 0, up9 = 0, up10 = 0; //몇개 있는지 count;

void dispersion(struct test final[], int num) {



   for (int i = 0; i < num; i++) { //배열에 각 분포별 점수를 넣고, 개수 세기 code

      if ((final[i].score >= 0) && (final[i].score <= 10)) { //점수 분포가 0~10일때
         to10[i] = final[i].score; //10분포 배열에 원소의 값을 넣고
         up1++; //up1 값 하나 증가시켜주기

      }
      else if ((final[i].score >= 10) && (final[i].score <= 20)) { // 10~20일때
         to20[i] = final[i].score;
         up2++;
      }
      else if ((final[i].score >= 20) && (final[i].score <= 30)) { // 20~30일때
         to30[i] = final[i].score;
         up3++;
      }
      else if ((final[i].score >= 30) && (final[i].score <= 40)) { // 30~40일때
         to40[i] = final[i].score;
         up4++;
      }
      else if ((final[i].score >= 40) && (final[i].score <= 50)) { // 40~50일때
         to50[i] = final[i].score;
         up5++;
      }
      else if ((final[i].score >= 50) && (final[i].score <= 60)) { //50~60일때
         to60[i] = final[i].score;
         up6++;
      }
      else if ((final[i].score >= 60) && (final[i].score <= 70)) { // 60~70일때
         to70[i] = final[i].score;
         up7++;
      }
      else if ((final[i].score >= 70) && (final[i].score <= 80)) { // 70~80일때
         to80[i] = final[i].score;
         up8++;
      }
      else if ((final[i].score >= 80) && (final[i].score <= 90)) { // 80~90일때
         to90[i] = final[i].score;
         up9++;
      }
      else if ((final[i].score >= 90) && (final[i].score <= 100)) { // 90~100일때
         to10[i] = final[i].score;
         up10++;
      }

   }

   //결과 print
   printf("0~10점대 : %d명\n", up1);
   printf("10~20점대 : %d명\n", up2);
   printf("20~30점대 : %d명\n", up3);
   printf("30~40점대 : %d명\n", up4);
   printf("40~50점대 : %d명\n", up5);
   printf("50~60점대 : %d명\n", up6);
   printf("60~70점대 : %d명\n", up7);
   printf("70~80점대 : %d명\n", up8);
   printf("80~90점대 : %d명\n", up9);
   printf("90~100점대 : %d명\n", up10);


   //가장 많이 분포해있는 점수대 구하기
   int score_name[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
   int many_score[10] = { up1, up2, up3, up4, up5, up6, up7, up8, up9, up10 };
   int max = 0;
   int score_n = 0;

   for (int j = 0; j < 10; j++) {

      if (max < many_score[j]) {
         max = many_score[j]; //분포하는 점수가 몇 개인지
         score_n = score_name[j]; //분포 점수대를 알기 위해서
      }

   }
   printf("\n");
   printf("가장 많은 점수대에 분포해있는 점수는 %d~%d점대이고, %d명이 분포되어있습니다.\n", score_n, score_n + 10, max);

}


void score_comparsion(struct test final[], int num) { //가장 낮은 점수를 맞은 학생과 높은 점수를 맞은 학생 찾기

   int max_score = 0;
   int min_score = 100;
   char* bigp = final[0].name; //가장 큰 수의 포인터 주소값 담을 변수 선언
   char* smallp = final[0].name; //가장 큰 수의 포인터 주소값 담을 변수 선언

   float total_score = 0;

   //높은 점수를 찾기

   for (int i = 0; i < num; i++) {
      if (max_score < final[i].score) {  //최대값 찾기 비교
         max_score = final[i].score; //큰 수라면 저장
         bigp = final[i].name;

      }

   }

   printf("\n가장 높은 점수를 받은 %s 학생의 점수는 %d점입니다.\n", bigp, max_score);


   //낮은 점수를 찾기
   for (int i = 0; i < num; i++) {
      if (min_score > final[i].score) {  //최소값 찾기 비교
         min_score = final[i].score; //작은 수라면 저장
         smallp = final[i].name;
      }

   }

   printf("가장 낮은 점수를 받은 %s 학생의 점수는 %d점입니다.\n",smallp, min_score);


   //전체 학생 점수의 평균을 출력
   for (int i = 0; i < num; i++) {
      total_score = total_score + final[i].score;
   }

   printf("\n전체 학생들의 평균 점수는 %0.1f점 입니다.", total_score / num);

}


int main() {

   //Test case

   struct test final[20] = { {"김컴공", 23}, {"이현준", 87}, {"김성민", 86}, {"서연주", 74}, {"김도희", 100},
                    {"권재승", 5}, {"장무명", 62}, {"강자바", 12}, {"박바지", 53}, {"김시프", 48},
                    {"한웹프", 76}, {"강자구", 2}, {"권논회", 56}, {"이름무", 18}, {"공책시", 27},
                    {"궁궁동", 67}, {"충대남", 37}, {"공과대", 84}, {"김귀찮", 63}, {"기보드", 87} }; //총 20명의 점수
   int num;

   scanf("%d", &num);
   for(int i=0; i<num; i++){
      scanf("%s", final[i].name);
      scanf("%d", &final[i].score);
   }

   dispersion(final, num);
   score_comparsion(final, num);

   printf("\n교수님 도와드리기 프로젝트 완료!");

}

