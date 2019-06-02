#include<stdio.h>
int main(){
   int N;
   scanf("%d",&N);
   char name[N][10];
   int score[N];
   int i;
   int sum=0;
   int max=0;
   int max_people=0;
   int max_start=0;
   int min=100;
   int ze=0,on=0,tw=0,th=0,fo=0,fi=0,si=0,se=0,ei=0,ni=0;
   int max_index,min_index;
    
   for(i=0;i<N;i++){
      scanf("%s",&name[i]);
      scanf("%d",&score[i]);
      if(score[i]>max){
         max=score[i];
         max_index=i;
      }
      if(score[i]<min){
         min=score[i];
         min_index=i;
      }
      sum+=score[i];
      if(score[i]/10==0){
         ze++;
         if(max_people<ze){
            max_people=ze;
            max_start=0;
         }
      }
      if(score[i]/10==1){
         on++;
         if(max_people<on){
            max_people=on;
            max_start=10;
         }
      }
      if(score[i]/10==2){
         tw++;
         if(max_people<tw){
            max_people=tw;
            max_start=20;
         }
      }
      if(score[i]/10==3){
         th++;
         if(max_people<th){
            max_people=th;
            max_start=30;
         }
      }
      if(score[i]/10==4){
         fo++;
         if(max_people<fo){
            max_people=fo;
            max_start=40;
         }
      }
      if(score[i]/10==5){
         fi++;
         if(max_people<fi){
            max_people=fi;
            max_start=50;
         }
      }
      if(score[i]/10==6){
         si++;
         if(max_people<si){
            max_people=si;
            max_start=60;
         }
      }
      if(score[i]/10==7){
         se++;
         if(max_people<se){
            max_people=se;
            max_start=70;
         }
      }
      if(score[i]/10==8){
         ei++;
         if(max_people<ei){
            max_people=ei;
            max_start=80;
         }
      }
      if(score[i]/10>=9){
         ni++;
         if(max_people<ni){
            max_people=ni;
            max_start=90;
         }
      }
   }
   int max_end=max_start+10;
   double av=(double)sum/N;
   double temp=(int)(av*100)/10;
   av=temp/10;
   printf("0~10점대 : %d명\n",ze);
   printf("10~20점대 : %d명\n",on);
   printf("20~30점대 : %d명\n",tw);
   printf("30~40점대 : %d명\n",th);
   printf("40~50점대 : %d명\n",fo);
   printf("50~60점대 : %d명\n",fi);
   printf("60~70점대 : %d명\n",si);
   printf("70~80점대 : %d명\n",se);
   printf("80~90점대 : %d명\n",ei);
   printf("90~100점대 : %d명\n",ni);
   
   printf("\n");
   
   printf("가장 많은 점수대에 분포해있는 점수는 %d~%d점대이고, %d명이 분포되어있습니다.\n",max_start,max_end,max_people);
   
   printf("\n");
   
   printf("가장 높은 점수를 받은 %s 학생의 점수는 %d점입니다.\n",name[max_index],max);
   printf("가장 낮은 점수를 받은 %s 학생의 점수는 %d점입니다.\n",name[min_index],min);
   
   printf("\n");
   printf("전체 학생들의 평균 점수는 %.1f점 입니다.\n",av);
   printf("교수님 도와드리기 프로젝트 완료!");
}