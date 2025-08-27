#include <stdio.h>
int main(){

    //Movimento torre

int torre = 5;
printf("Movimento da Torre\n");
for ( int i = 0; i < torre; i++)
{
  printf("Direita\n");
}

//Movimento bispo

int bispo = 5;
int i = 0;

printf("Movimento do Bispo:\n");
while (i < bispo)
{
    printf("Cima Direita\n");i++;
}

//Movimento rainha

int rainha = 8;
int j = 0;
printf("Movimento da rainha:\n");
do
{
    printf("Esquerda\n"); j++;
} while (j < rainha);


    return 0;
}