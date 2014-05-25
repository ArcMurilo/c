/*
Implemente e teste programa para solucionar o jogo torres de hanói. Ver livro texto.
*/
#include <stdio.h>

void movetorre(int, char, char, char);

int main(){
   int discos;
   printf("TORRE DE HANOY\n\n");
   printf("Digite a quantidade de discos: ");
   scanf("%d",&discos);
   movetorre(discos,'A','C','B');
   printf("\n");
   return 0;
}

void movetorre (int n, char orig, char dest, char aux){
   if (n==1) {printf("\nMover disco 1 da torre %c para a torre %c", orig, dest);
   return;}
   movetorre(n-1,orig,aux,dest);
   printf("\nMover disco %d da torre %c para a torre %c", n, orig, dest);
   movetorre(n-1,aux,dest,orig);
}