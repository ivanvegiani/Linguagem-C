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
void printStack(int stack[]);

//Declaration
struct tpilha pilha;

//Main
int main (void){

    stackPush();
    printStack(pilha.dados);

}//fim main


// métodos

void stackPush(){

for(int i=0;i<tamanho;i++){
  printf("\nPasso %d\n",i);
  printf("%d", pilha.top);
  if (pilha.top == tamanho) {
    printf("\nA pilha está cheia, impossível empilhar um novo elemento!\n\n");
    system("pause");
  }
  else {
    printf("\nDigite o valor a ser empilhado:");
    scanf("%d", &pilha.dados[pilha.top]);
    pilha.top++;
}// fim else
}// fim for
}// fim stackPush


void printStack(int stack[]){
  int i=0;
  while(i<tamanho){
    printf("%d|",stack[i]);
    i++;

}//fim while
printf("\n");
}//fim printStack
