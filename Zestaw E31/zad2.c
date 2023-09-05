#include <stdio.h>
#include <stdlib.h>

int foo(wchar_t* nap)
{
    for(int i = 0; i < 3; i++)
    {
        if(nap[i] < L'0' || nap[i] > L'9')
        {
            return 0;
        }
    }
    
    return (nap[0] - L'0') * 100 + (nap[1] - L'0') * 10 + (nap[2] - L'0');
}

int main()
{
    wchar_t napis[4] = L"123";
    printf("%d", foo(napis));
    
    return 0;
}
