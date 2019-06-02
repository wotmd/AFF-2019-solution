#include <stdio.h>
  
int fact(int n) {
        if(n <= 1) {
                return 1;
        }
        else {
                return fact(n-2) * n;
        }
}

void main() {
        int n;
        scanf("%d", &n);
        printf("%d\n", fact(n));
}