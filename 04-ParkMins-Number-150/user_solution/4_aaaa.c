#include <stdio.h>
  
int main()
{
        int i, n, pnum=0;
        unsigned long long num, fibo[94];

        fibo[0] = 0;
        fibo[1] = 1;
        for(i=2; i<94; i++)
        {
                fibo[i] = fibo[i-1]+fibo[i-2];
        }

        scanf("%d", &n);

        num = fibo[n];
        while(num/10 != 0 )
        {
                pnum += num%10;
                num /= 10;
        }
        pnum += num;
        printf("%d", pnum);

        return 0;
}