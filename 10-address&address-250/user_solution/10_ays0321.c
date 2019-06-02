#include<stdio.h>
  
char and(char m, char n){
        if (m == '.' && n=='.'){
                char k = '.';
                return k;
        }else {
                return m & n;
        }
}

int main(){
        int x,y=2,z;
        char a[50];
        char b[50];
        char c[50];
        scanf("%s",a);
        scanf("%s",b);
        for(x =0; x<50; x++){
                if(b[x]=='0'){
                        y = 0;
                }
                if(y == 0 && b[x]=='1'){
                        printf("wrong subnetmask\n");
                        z = 1;
                        break;
                }
        }
        if(z!=1){
                for(x = 0; x<40; x++){
                        c[x]=and(a[x],b[x]);
                }
                printf("%s\n",c);
        }
}