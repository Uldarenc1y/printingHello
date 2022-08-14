#include <stdio.h>
#define IN 0
#define OUT 1
int main()
{
    int c, nc, nw, nl, test;
    nc = nw = nl = 0;
    test = OUT;
    while ((c = getchar()) != EOF)
    {nc++;
    if (c == '\n')
        {nl++;}
    else if ((c == '\t' || c == ' ' || c == '\n') && test != OUT)
        {nw++;
        test = OUT;}
    else if (test == OUT){
        test = IN;
        }}
    printf("%d\n%d\n%d", nc, nw, nl);
    return 0;
}
