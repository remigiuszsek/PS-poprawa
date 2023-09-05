#include <stdio.h>

int foo(char* a, char* b, int* x)
{
    char elo[2 * *x];
    elo[0] = *a;
    elo[1] = *b;
    
    elo[2 * *x] = '\0';
    
    int size = sizeof(elo)/sizeof(elo[0]);
    
    int i;
    for (i = 0; i < size; i++) 
    {
        
    }
    
    return i;
}

int main()
{
    char c = 'X';
    char d = 'D';
    int e = 3;
    int ello = foo(&c, &d, &e);
    printf("%d", ello);

    return 0;
}
