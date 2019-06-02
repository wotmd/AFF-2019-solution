#include<stdio.h>
  
int combination(int a, int b){
        if(a ==b || b == 0){
                return 1;
        }
        return combination(a-1,b-1) + combination(a-1,b);
}
int main(){
        int w,l,g;
        scanf("%d %d",&w,&l);
        g = combination(7-w-l,4-w);
        printf("%d",g);
}