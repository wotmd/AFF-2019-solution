#include <stdio.h>


int fact(int n) {
   
   if (n < 2)
      return 1;
   else
      return n * fact(n - 1);
}
int calculate(int w, int l) {
   int remain_win = 4 - w;
   int remain_lose = 3 - l;

   return fact(remain_win + remain_lose) / fact(remain_win) / fact(remain_lose);
   
}
int main() {
   int Win, lose;
   scanf("%d %d", &Win, &lose);
   int correct = calculate(Win, lose);
   printf("%d", correct);
   //system("pause");
}
