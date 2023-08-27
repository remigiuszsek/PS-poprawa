#include <stdio.h>
#include <stdlib.h>

int * foo() {
    return malloc(sizeof(double));
}

int main()
{
    
    printf("%p\n", foo());
    
    return 0;
}
