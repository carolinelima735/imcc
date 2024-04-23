#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

// Definição da estrutura para armazenar informações de uma pessoa
struct Pessoa {
    float altura;
    float peso;
};

// Função para calcular o IMC
float calcularIMC(float altura, float peso) {
    return peso / (altura * altura);
}

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
    // Declaração de uma variável do tipo Pessoa
    struct Pessoa pessoa;

    // Solicita ao usuário para inserir sua altura e peso
    printf("Digite sua altura em metros: ");
    scanf("%f", &pessoa.altura);

    printf("Digite seu peso em quilogramas: ");
    scanf("%f", &pessoa.peso);

    // Chama a função calcularIMC() passando os dados da pessoa
    float imc = calcularIMC(pessoa.altura, pessoa.peso);

    // Exibe o resultado do cálculo do IMC
    printf("Seu IMC é: %.2f\n", imc);

    return 0;
}

