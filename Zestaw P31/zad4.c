#include <stdio.h>
#include <stdlib.h>

struct node {
  int i;
  struct node * next;
};

int isSquare(int n)
{
    int i = 0;
    while(i*i <= n)
    {
        if(i*i == n)
        {
            return 1;
        }
        i++;
    }
    
    return 0;
}

void wyswietl(struct node * lista)
{
    while(lista != NULL)
    {
        if(isSquare(lista->i))
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
    lista->next->i = 0;
    lista->next->next = malloc(sizeof(struct node));
    lista->next->next->i = 25;
    lista->next->next->next = NULL;
    
    wyswietl(lista);

    return 0;
}
