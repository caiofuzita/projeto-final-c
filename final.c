//   Dados dos funcionários (CPF, nome, salário mensal com dias casas decimais, endereço, CEP, estado e cidade)
/* A entrada conterá vários casos de teste. Cada caso de teste deverá receber os dados pelo teclado.
 final da entrada é determinado por digitação de 0 (zero) em CNPJ, ou CPF, ou RA, ou outro que você definir.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int i, opcao;

void main()
 {
    setlocale(LC_ALL,"");
    menu();
    principal();
 }

menu()
{
    for(i = 0; i < 30; i++)
        putchar('*');

    printf("\n*** Dados dos funcionários ***\n");

    for(i = 0; i < 30; i++)
        putchar('*');

    printf("\n\n************ Opções ************");

    printf("\n1. >> Pesquisar funcionário");
    printf("\n2. >> Cadastrar novo funcionário.");
    printf("\n3. >> Editar funcionário existente.");
    printf("\n4. >> Excluir funcionário existente.");
    printf("\n5. >> Mostrar todos os funcionários existentes.");
    printf("\n6. >> Sair.");

    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
}

principal()
{
    switch(opcao)
    {
    case 1:
        pesquisar();
        break;

    case 2:
        cadastro();
        break;

    case 3:
        editar();
        break;

    case 4:
        excluir();
        break;

    case 5:
        mostrarFuncionarios();
        break;

    case 6:
        sair();
        break;
    }
}

pesquisar()
{

}

cadastro()
{
    system("cls");
    for(i = 0; i < 30; i++)
        putchar('*');
    printf("\n********** Cadastro **********\n");
    for(i = 0; i < 30; i++)
        putchar('*');
}

editar()
{
}

excluir()
{
}

mostrarFuncionarios()
{

}

sair()
{
}
