#include <stdio.h>
#include <stdlib.h>

void main()
{
	double num;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	int g=0;
	int h=0;
	int l=0;
	int m=0;
	int i;
	int k;
	int *score;
	char *str;
	int best=0;
	int low=100;
	int t=0;
	int *r;
	double total=0.0;
	
	str=(char*)malloc(sizeof(char)*num);
	score=(int*)malloc(sizeof(int)*num);
	r=(int*)malloc(sizeof(int)*10);
	scanf("%f",&num);
	
	for(i=0;i<num;i++)
	{
		scanf("%s",str);
		scanf("%d",&score);
		if(score<=100&&score>90)
		{
			a+=1;
		}
		if(score<=90&&score>80)
		{
			b+=1;
		}
		if(score<=80&&score>70)
		{
			c+=1;
		}
		if(score<=70&&score>60)
		{
			d+=1;
		}
		if(score<=60&&score>50)
		{
			e+=1;
		}
		if(score<=50&&score>40)
		{
			f+=1;
		}
		if(score<=40&&score>30)
		{
			g+=1;
		}
		if(score<=30&&score>20)
		{
			h+=1;
		}
		if(score<=20&&score>10)
		{
			l+=1;
		}
		if(score<=10&&score>0)
		{
			m+=1;
		}
	
	
	}
	r[0]=m;
	r[1]=l;
	r[2]=h;
	r[3]=g;
	r[4]=f;
	r[5]=e;
	r[6]=d;
	r[7]=c;
	r[8]=b;
	r[9]=a;
	prntf("0~10점대 : %d명\n",m);
	prntf("10~20점대 : %d명\n",l);
	prntf("20~30점대 : %d명\n",h);
	prntf("30~40점대 : %d명\n",g);
	prntf("40~50점대 : %d명\n",f);
	prntf("50~60점대 : %d명\n",e);
	prntf("60~70점대 : %d명\n",d);
	prntf("70~80점대 : %d명\n",c);
	prntf("80~90점대 : %d명\n",b);
	prntf("90~100점대 : %d명\n",a);
	for(i=0;i<num;i++)
	{
		if(t<r[i])
		{
			t=r[i];
		}
	}
	for(i=0;i<num;i++)
	{
		if(t==r[i])
		{
			k=i;
		}
	}
	printf("\n가장 많은 점수대에 분포해있는 점수는 %d~%d점대이고, %d명이 분포되어있습니다.\n",(k-1)*10,k*10,t);
	
	for(i=0;i<num;i++)
	{
		if(best<score[i])
		{
			best=score[i];
		}
		if(low>score[i])
		{
			low=score[i];
		}
	}
	for(i=0;i<num;i++)
	{
		if(best==score[i])
		{
			printf("\n가장 높은 점수를 받은 %s 학생의 점수는 %d점입니다.\n",str[i],score[i]);
		}
		if(low==score[i])
		{
			printf("가장 낮은 점수를 받은 %s 학생의 점수는 %d점입니다.\n",str[i],score[i]);
		}
	}
	for(i=0;i<num;i++)
	{
		total+=score[i];
	}
	printf("\n전체 학생들의 평균 점수는 %.2f점 입니다.\n",total/num);
	prntf("교수님 도와드리기 프로젝트 완료!\n")	
}