#include <stdio.h>
#include <stdlib.h>

double * foo(unsigned int n) {
    return malloc(n * sizeof(double));
}

int main()
{
    printf("%p\n", foo(3));
    
    return 0;
}
