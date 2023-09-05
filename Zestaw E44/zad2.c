#include <stdio.h>
#include <stdlib.h>

void triple_double_value(double* num)
{
    *num *= 3;
}

int main()
{
    double num = 3;
    printf("%f\n", num);
    triple_double_value(&num);
    printf("%f\n", num);

    return 0;
}
