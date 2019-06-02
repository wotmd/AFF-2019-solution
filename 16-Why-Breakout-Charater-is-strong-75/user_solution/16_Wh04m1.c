#include <stdio.h>
  
void main() {
        char a,b,c,d,e;
        scanf("%c %c %c %c %c", &a,&b,&c,&d,&e);
        int n;
        scanf("%d", &n);
        if(n == 1) {
                printf("%c%c%c%c", b,c,d,e);
        }
        if(n == 2) {
                printf("%c%c%c%c", a,c,d,e);
        }
        if(n == 3) {
                printf("%c%c%c%c", a,b,d,e);
        }
        if(n == 4) {
                printf("%c%c%c%c", a,b,c,e);
        }
        if(n == 5) {
                printf("%c%c%c%c", a,b,c,d);
        }
}
