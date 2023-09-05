#include <stdio.h>

float suma(char x[], int n)
{
    return n * 2;
}

int main()
{
    char x[3] = {'a', 'b', 'c'};
    int n = 5;
    
    printf("%f", suma(x, n));
    
    return 0;
}
