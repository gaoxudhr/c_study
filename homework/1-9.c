#include<stdio.h>

int flag = 0;

int main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            flag = 0;
            putchar(c);
        }
        else
        {
            if (flag == 0)
            {
                flag = 1;
                putchar(c);
            }
            
        }
    }
    return 0;
}
