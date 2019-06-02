#include <stdio.h>
  
int facto(int n);

int main()
{
        int n;

        scanf("%d", &n);

        printf("%d", facto(n));

        return 0;
}

int facto(int n)
{
        if(n==0 || n==1)
        {
                return 1;
        }
        return n*facto(n-2);
}
