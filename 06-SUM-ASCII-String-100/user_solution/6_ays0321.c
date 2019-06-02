#include <stdio.h>
  
int main(){
        int i,k=0;
        char a[20] = "";
        fgets(a,20,stdin);
        for(i =0; i<20; i++){
                if(&a[i] == ""){
                        k = k;
                }else {
                        k = k+(int)a[i];
                }
        }
        printf("%d\n",k);
}