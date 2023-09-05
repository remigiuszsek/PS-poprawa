#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Samochod {
  char marka[50];
  int przebieg;
};

struct Samochod * initSamochod(char marka[], int przebieg)
{
    if(przebieg > 0 && strlen(marka) >= 2)
    {
        struct Samochod * bryka = malloc(sizeof(struct Samochod));
        strcpy(bryka->marka, marka);
        bryka->przebieg = przebieg;
        return bryka;
    }
    
    return NULL;
}

void zwiekszPrzebieg(struct Samochod * fura)
{
    fura->przebieg += 1000;
}

int main()
{
    struct Samochod * bryka = initSamochod("Mercedes", 300000);
    struct Samochod * fura = initSamochod("Ferrari", 20000);
    
    zwiekszPrzebieg(fura);
    printf("%d", fura->przebieg);

    return 0;
}
