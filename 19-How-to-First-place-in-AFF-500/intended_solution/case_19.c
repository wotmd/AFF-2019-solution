#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int max (int args, ...);

int main ()
{
   int N,i;
   int cu,bc,cg;
   int arr[1001][3] = {0, };
   scanf("%d",&N);
   for (i=1; i<=N; i++)
   {   
      scanf("%d %d %d",&cu,&bc,&cg);
      arr[i][0] = max(2, arr[i-1][1]+cu, arr[i-1][2]+cu);
      arr[i][1] = max(2, arr[i-1][0]+bc, arr[i-1][2]+bc);
      arr[i][2] = max(2, arr[i-1][0]+cg, arr[i-1][1]+cg);
   }   
   printf("%d\n", max(3, arr[N][0], arr[N][1], arr[N][2]));
}

int max (int args, ...)
{
   va_list argptr;
   int max = -1;
   int temp;
   int i;
   va_start(argptr, args);
   for (i=0; i<args; i++)
   {   
      temp = va_arg(argptr, int);
      max = (max > temp) ? max : temp;
   }   
   va_end(argptr);
   if (args < 2) return 0; // args error.
   return max;
}
