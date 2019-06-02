#include <stdio.h>
#include <math.h>

int fibonacci(int n){
        if (n == 0){
                return 0;
        } else if (n == 1){
                return 1;
        } else {
                return fibonacci(n - 1) + fibonacci(n - 2);
        }
}

int main(void){
        int a,b,c,d,i;
        scanf("%d", &a);
        b = fibonacci(a);
        for(i = 0; i<10; i++){
                d = (int)pow(10.0,(double)i);
                c = c + b %d;
        }
        printf("%d",c);
}