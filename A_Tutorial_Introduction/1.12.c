#include <stdio.h>

int main()
{
    int c;

    while((c=getchar())!=EOF)
    {
        if(c==' ' || c=='\t')
        {
            printf("\n");
            while(c==' ' || c=='\t')
            c=getchar();
        }
        if(c!=EOF)
        putchar(c);
    }
    return 0;
}
