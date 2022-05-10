//este programa recebe numeros positivos indica qual é o menor e maior valor

#include <stdio.h>
//#include <math.h>
#include <locale.h>

//definir constantes

int main () {
	setlocale(LC_ALL, "Portuguese");
	//declarar variaveis
	float valor = 0, total = 0, contador = 0, maior = 0, menor = 0, media = 0;
	
 	while (valor >= 0) {
		//receber valor
		printf("Digite um valor (insira um valor negativo para receber o resultado): ");
		scanf("%f", &valor);
		
		//caso o valor seja menor que 0 finalizar e nao definir ele como menor
		if (valor < 0) {
			printf("Finalizando...\n");
			break;
		}
		//ao iniciar atribuir menor e maior ao primeiro valor recebido
		if (contador == 0) {
			maior = valor;
			menor = valor;
		}
		//se o valor inserido for menor que o menor anterior, atribuir
		if (valor < menor)
			menor = valor;
		//se o valor inserido for maior que o maior anterior, atribuir
		if (valor > maior)
			maior = valor;
		
		//calcular total
		total += valor;
		//adicionar um a cada numero que for digitado
		contador++;
	}
	media  = total/contador;
	printf("Maior valor: %.2f\nMenor valor: %.2f\nMédia: %.2f", maior, menor, media);
}
