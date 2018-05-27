#include <stdio.h>
#include <stdlib.h>

#define  tamanho 3


//Structs
struct tpilha {
  int dados[tamanho];
  int ini;
  int top;
};

//Prototype
void stackPush();
int stackPop(int stack[]);
void printStack(int stack[]);


//Declaration variável global
struct tpilha pilha;


//Main
int main (void){
    pilha.ini=0;
    pilha.top=0;
    stackPush();
    printStack(pilha.dados);
    stackPop(pilha.dados);
    printStack(pilha.dados);
    printf("retirado o valor %d\n",stackPop(pilha.dados));

}//fim main


// métodos

void stackPush(){

for(int i=0;i<tamanho;i++){
  printf("\nPasso %d\n",i);
  printf("%d", pilha.top);
  if (pilha.top == tamanho) {
    printf("\nA pilha está cheia, impossível empilhar um novo elemento!\n\n");
  }// fim if
  else {
    printf("\nDigite o valor a ser empilhado:");
    scanf("%d", &pilha.dados[pilha.top]);
    pilha.top++;
}// fim else
}// fim for
}// fim stackPush

void printStack(int stack[]){
  int i=0;
  while(i<pilha.top){
    printf("%d|",stack[i]);
    i++;

}//fim while
printf("\n");
}//fim printStack

int stackPop(int stack[]){

  if (pilha.top == pilha.ini) {
    printf("\nA pilha está vazia, impossível desempilhar um novo elemento!\n\n");
  }// fim if
  else {
    pilha.dados[pilha.top]=0;
    pilha.top--;
    return pilha.dados[pilha.top];
  }//fim else

}//fim stackPop
