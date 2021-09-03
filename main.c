#include<stdio.h>
#include<math.h>
#include <locale.h>
float CalculaArea(float largura, float comprimento){
  return largura * comprimento;
}

float Lampada(int tipo, float metragem){
     float quantidade;
     int pot;
    switch(tipo){
      case 0:
        pot = 12;
        break;
      case 1:
        pot = 15;
        break;
      case 2:
        pot = 18;
        break;
      case 3:
        pot = 20;
        break;
      case 4:
        pot = 22;
        break;
      default:
        pot = 0;
    }
  quantidade = (metragem * pot) / 6999 ;
  return quantidade;
}
int main(){

 struct {
 int tipo;
 float larg, comp;
 } comodo;
 float nlampadas;
 float tamanho;
 setlocale(LC_ALL, "Portuguese");
 printf("\n\nDigite o tipo de c�modo (0 ate 4):");
 scanf("%d", &comodo.tipo);

 while(comodo.tipo != -1 && comodo.tipo <=4) {

    setlocale(LC_ALL, "Portuguese");
  printf("\n\nDigite a largura do c�modo:");
  scanf("%f", &comodo.larg);

 setlocale(LC_ALL, "Portuguese");
  printf("\n\nDigite o comprimento do c�modo:");
  scanf("%f", &comodo.comp);

  tamanho = CalculaArea(comodo.larg, comodo.comp);
  nlampadas = Lampada(comodo.tipo, tamanho);
  setlocale(LC_ALL, "Portuguese");
  printf("\n\n Pela metragem de seu c�modo voc� ira precisar de %f  l�mpadas",ceil(nlampadas));
  printf("\n\nDigite o tipo de c�modo (0 ate 4):");
  scanf("%d", &comodo.tipo);

 }
}
