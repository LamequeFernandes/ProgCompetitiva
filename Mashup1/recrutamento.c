#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

celula *enfileira(celula *f, int x){
   celula *novo = malloc(sizeof(celula));
   if(novo == NULL)
      return NULL;
   else{
      novo->prox = f->prox;
      f->prox = novo;
      f->dado = x;
      return novo;
   }
}


int main (){
   celula *umOuMenosUm = malloc(sizeof(celula));
   int nEventos;
   scanf("%d", &nEventos);

   for (int i = 0; i <= nEventos; i++)
   {
      int num;
      scanf("%d", &num);
      enfileira(umOuMenosUm, num);
   }
   
   while ()
   {
      /* code */
   }
   

   return 0;
}