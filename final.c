//   Dados dos funcion�rios (CPF, nome, sal�rio mensal com dias casas decimais, endere�o, CEP, estado e cidade)
/* A entrada conter� v�rios casos de teste. Cada caso de teste dever� receber os dados pelo teclado.
 final da entrada � determinado por digita��o de 0 (zero) em CNPJ, ou CPF, ou RA, ou outro que voc� definir.*/

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

    printf("\n*** Dados dos funcion�rios ***\n");

    for(i = 0; i < 30; i++)
        putchar('*');

    printf("\n\n************ Op��es ************");

    printf("\n1. >> Pesquisar funcion�rio");
    printf("\n2. >> Cadastrar novo funcion�rio.");
    printf("\n3. >> Editar funcion�rio existente.");
    printf("\n4. >> Excluir funcion�rio existente.");
    printf("\n5. >> Mostrar todos os funcion�rios existentes.");
    printf("\n6. >> Sair.");

    printf("\n\nEscolha uma op��o: ");
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
