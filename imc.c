#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

// Defini��o da estrutura para armazenar informa��es de uma pessoa
struct Pessoa {
    float altura;
    float peso;
};

// Fun��o para calcular o IMC
float calcularIMC(float altura, float peso) {
    return peso / (altura * altura);
}

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
    // Declara��o de uma vari�vel do tipo Pessoa
    struct Pessoa pessoa;

    // Solicita ao usu�rio para inserir sua altura e peso
    printf("Digite sua altura em metros: ");
    scanf("%f", &pessoa.altura);

    printf("Digite seu peso em quilogramas: ");
    scanf("%f", &pessoa.peso);

    // Chama a fun��o calcularIMC() passando os dados da pessoa
    float imc = calcularIMC(pessoa.altura, pessoa.peso);

    // Exibe o resultado do c�lculo do IMC
    printf("Seu IMC �: %.2f\n", imc);

    return 0;
}

