#include<stdio.h>

int main()
{
    int c, nl;
    nl = 0;

    printf("%c\n",65);
    while((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}
