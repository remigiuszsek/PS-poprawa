#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node {
  int i;
  struct node * next;
};

void wyswietl(struct node * lista)
{
    while(lista != NULL)
    {
        if(sqrt(lista->i) * sqrt(lista->i) == lista->i)
        {
            printf("%d, ", lista->i);
        }
        lista = lista->next;
    }
}

int main()
{
    struct node * lista = malloc(sizeof(struct node));
    
    lista->i = 4;
    lista->next = malloc(sizeof(struct node));
    lista->next->i = 5;
    lista->next->next = malloc(sizeof(struct node));
    lista->next->next->i = 9;
    lista->next->next->next = NULL;
    
    wyswietl(lista);

    return 0;
}
