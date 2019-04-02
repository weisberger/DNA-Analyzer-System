#include "stdio.h"
char *  Str_n_copy(char * destinaton, char * src, int n)
{
    size_t i = 0;
    while((src[i]) && (i < n))
    {
        destinaton[i] = src[i];
        ++i;
    }
    destinaton[i] = '\0';
    return destinaton;
}
int main()
{
    char * a = "aaa";
    char g[100];
    Str_n_copy(g, a,1);
    printf("%s", g);
    return 0;
}
