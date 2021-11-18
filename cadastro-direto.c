#include <stdio.h>

int main()
{
    char cpf[15];
    char nome[20];
    double salario;
    char endereco[50];
    int numero;
    char cep[9];
    char uf[3];
    char cidade[20];

    scanf("%s %s %lf %[^,]%*c %d %s %s %s%*c", cpf, nome, &salario, endereco, &numero, cep, uf, cidade);

    printf("cpf: %s\n", cpf);
    printf("nome: %s\n", nome);
    printf("salario: %lf\n", salario);
    printf("endereco: %s\n", endereco);
    printf("numero: %d\n", numero);
    printf("cep: %s\n", cep);
    printf("uf: %s\n", uf);
    printf("cidade: %s\n", cidade);

    return 0;
}
