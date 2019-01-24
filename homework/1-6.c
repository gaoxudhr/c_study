#include<stdio.h>

int main()
{
    int c = 0;
    while(1)
    {
        c = (getchar() != EOF);
        printf("%d\n",c);
    }
    return 0;
}
