#include <stdio.h>
#include <stdlib.h>

struct node {
  int a;
  struct node * next;
};

void wyzerujJesli(struct node * lista)
{
    while(lista->next != NULL)
    {
        if (lista->next->a % 3 == 0)
        {
            lista->next->a = 0;
        }
        
        lista = lista->next;
    }
    
    printf("---\n");
}

void wyswietlListe(struct node * lista) 
{
    while(lista != NULL)
    {
        printf("%d\n", lista->a);
        lista = lista->next;
    }
}

int main()
{
    struct node * lista = malloc(sizeof(struct node));
    
    lista->a = 2;
    lista->next = malloc(sizeof(struct node));
    lista->next->a = 6;
    lista->next->next = malloc(sizeof(struct node));
    lista->next->next->a = 15;
    lista->next->next->next = NULL;
    
    wyswietlListe(lista);
    wyzerujJesli(lista);
    wyswietlListe(lista);
    

    return 0;
}
