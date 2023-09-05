#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countEven(char napis[])
{
    int liczba = 0;
    for(int i = 0; i < strlen(napis); i++)
    {
        if(napis[i] > '0' && napis[i] < '9' && napis[i] % 2 == 0)
        {
            liczba++;
        }
    }
    
    return strlen(napis) + liczba;
}

int main()
{
    char nap[4] = "e24a";
    printf("%d", countEven(nap));
    
    return 0;
}

