#include <stdio.h>
#include <stdlib.h>

void foo(int const * a, int * const b) {
    *b = *a;
}

int main()
{
    int a = 5, b = 9;
    printf("Przed: %d, %d\n", a, b);
    foo(&a, &b);
    printf("Po: %d, %d\n", a, b);
    
    return 0;
}
