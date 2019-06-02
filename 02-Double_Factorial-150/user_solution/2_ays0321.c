#include<stdio.h>
  
int main(){
        int a, b, c = 1;
        scanf("%d",&a);
        for(b = 0; b < a/2+1; b++){
                int d = (a-2*b);
                if(d == 0){
                        d = 1;
                }
                c = c*d;
        }
        printf("%d",c);
}