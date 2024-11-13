#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct vetor_index Index; 


void carrega_vetor_ordenado(int colecao[], int valor_inicial, int tamanho);

void imprime_vetor(int colecao[], int tamanho); 

void vetor_index(int vet[], int index[], int tamanho, int ind); 

void vetor_index_struct(int vet[], Index index[], int tamanho, int ind); 

int busca_intervalo(Index index[], int tamanho, int chave); 
int busca_binaria(int file[], int size, int key); 
