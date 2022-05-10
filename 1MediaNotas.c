//este programa calcula a media do aluno só permitindo a entrada de valores entre 10 e 0

#include <stdio.h>
#include <locale.h>
//#include <math.h>

//definir constantes
#define QUANTIDADE_NOTAS 4
#define NOTA_MINIMA 0
#define NOTA_MAXIMA 10

void main () {
	setlocale(LC_ALL, "Portuguese");
	//declarar variaveis
	float valor, soma;
	int numeroNota;
	//for usado para criar um contador que delimita a quantidade de notas
	for (numeroNota = 0; numeroNota < QUANTIDADE_NOTAS; numeroNota++) {
		printf("Insira o valor de sua %dª nota (entre 0 e 10): ", numeroNota + 1);
		scanf("%f", &valor);
		//verificar se os valores inseridos nas notas estão abaixo de 0 ou acima 10, se estiver repetir o loop
		if (valor < NOTA_MINIMA || valor > NOTA_MAXIMA) {
			printf("O valor precisa estar entre 0 e 10!\n");
			//decrementar no contador para voltar para a nota que foi inserida errada
			numeroNota--;
			continue;
		}
		//atribuir as notas a variavel soma
		soma += valor;
	}
	//printf("Soma: %.2f, Quantidade de notas: %d\n", soma, numeroNota);
	//exibir resultado 
	printf("A média de suas notas é: %.2f", soma / numeroNota);
}
