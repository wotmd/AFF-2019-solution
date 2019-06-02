#include <stdio.h>
int Make_ParkMin_Number(unsigned long long fibonacci, int sum);
unsigned long long Make_Fibonacci_Number(int n);

int main() {
   int n;
   scanf("%d", &n);
   printf("%llu", Make_ParkMin_Number(Make_Fibonacci_Number(n), 0));
}

int Make_ParkMin_Number(unsigned long long fibonacci, int sum) {
   if (fibonacci / 10 == 0) {
      return sum + fibonacci;

   }
   else {
      sum = sum + fibonacci % 10;
      fibonacci = fibonacci / 10;
      Make_ParkMin_Number(fibonacci, sum);

   }

}

unsigned long long Make_Fibonacci_Number(int n) {
   unsigned long long fibonacci[94];
   int i;

   fibonacci[0] = 0;
   fibonacci[1] = 1;

   for (i = 2; i <= n; i++)
      fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

   return fibonacci[n];
}
