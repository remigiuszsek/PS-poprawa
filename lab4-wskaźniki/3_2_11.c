#include <stdio.h>
#include <stdlib.h>

int * foo(int n) {
    return malloc(n * sizeof(int));
}

int main()
{
    
    printf("%p\n", foo(3));
    
    return 0;
}
