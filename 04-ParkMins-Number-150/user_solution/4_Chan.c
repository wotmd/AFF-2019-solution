#include <stdio.h>
#include <string.h>

int fibbonacci_func(int number);

int main(void){
	int total=0;
    int i ;
    int n;
    int len;
    int k;
    char m[100];
    scanf("%d" , &n) ;
    
     
  int ans =fibbonacci_func(n - 1);
  
  sprintf(m,"%d",ans);
  len =strlen(m);
  
  for (i=0; i<len; i++){
  	total += m[i]-48;
  }
   printf("%d",total);
}
int fibbonacci_func(int number)
{
	if(number == 0 || number == 1)
	{
		return 1;
	}
	else
	{
		return fibbonacci_func(number - 2) + fibbonacci_func(number - 1);
	}
}