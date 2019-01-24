#include<stdio.h>

int main()
{
    int n_space;
    int n_tab;
    int n_line;
    n_space = n_tab = n_line = 0;
    int c;
    while((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++n_space;
        if (c == '\t')
            ++n_tab;
        if (c == '\n')
            ++n_line;
    }
    printf("n_space is %d\nn_tab is %d\nn_line is %d\n",n_space, n_tab, n_line);
    return 0;
}
