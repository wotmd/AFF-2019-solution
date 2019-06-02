#include <stdio.h>
  
int main()
{
        int n, num=0;
        char input;

        scanf("%d", &n);
        while(1)
        {
                scanf(" %c", &input);
                if(input == 'q')
                        break;
                num++;
        }
        if(n<num)
        {
                printf("You can't write them");
        }
        else
        {
                printf("You can write them");
        }

        return 0;
}
