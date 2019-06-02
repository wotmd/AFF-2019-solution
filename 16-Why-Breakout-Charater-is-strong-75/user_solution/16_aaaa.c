#include <stdio.h>
#include <string.h>

int main()
{
        int i, del;
        char ch[5];

        for(i=0; i<5; i++)
        {
                scanf(" %c", &ch[i]);
        }
        scanf("%d", &del);

        for(i=0; i<5; i++)
        {
                if(i == del-1)
                        continue;
                printf("%c", ch[i]);
        }

        return 0;
}
