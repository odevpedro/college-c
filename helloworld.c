#include <stdio.h>

int main(){

//separando os espaços de memoria	
int idade, idade_nova;


printf("Hello World!\n");
printf("Insira a sua idade:\n");
scanf("%d", &idade);

printf("Idade informada: %d. ", idade);

idade_nova = idade + 1;

printf("No ano que vem voce tera %d anos", idade_nova);
}
