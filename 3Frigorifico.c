//este programa de um frigorifico recebe o id e o peso de cada boi e indica o boi mais gordo e mais magro junto com seu id e o total do peso de todos os bois

#include <stdio.h>
//#include <math.h>
#include <locale.h>

//definir constantes

void main () {
	setlocale(LC_ALL, "Portuguese");
	//declarar variaveis
	int id, idMenor = 0, idMaior = 0, contador = 0;
	float peso, pesoMaior, pesoMenor, total = 0;
	
	//receber valores do id e do peso
	while (id >= 0) {
		printf("ID do boi (valor negativo para sair): ");
		scanf("%d", &id);
		//se o valor inserido for negativo encerrar codigo
		if (id < 0) {
			printf("\tEncerrando...\n");
			break;
		}
		//se o valor inserido for negativo ou 0 (pois o boi nao pode pesar 0 kg) encerrar codigo
		printf("Peso do boi em quilos (valor negativo ou 0 para sair): ");
		scanf("%f", &peso);
		if (peso <= 0 ) {
			printf("\tEncerrando...\n");
			break;
		}
		//quando iniciar atribuir o valor de menor e maior ao valor recebido
		if (contador == 0) {
			pesoMaior = peso;
			pesoMenor = peso;
			idMaior = id;
			idMenor = id;
		}
		if (peso < pesoMenor) {
			pesoMenor = peso;
			idMenor = id;
		} if (peso > pesoMaior) {
			pesoMaior = peso;
			idMaior = id;
		}
		total += peso;
		contador++;
	}
	printf("Boi mais pesado: ID %d\tPeso %.2f KG", idMaior, pesoMaior);
	printf("\nBoi mais leve: ID %d\tPeso %.2f KG", idMenor, pesoMenor);
	printf("\nTotal de peso de todos os bois: %.2f KG", total);
}
