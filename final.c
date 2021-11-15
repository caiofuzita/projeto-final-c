//   Dados dos funcion�rios (CPF, nome, sal�rio mensal com dias casas decimais, endere�o, CEP, estado e cidade)
/* A entrada conter� v�rios casos de teste. Cada caso de teste dever� receber os dados pelo teclado.
 final da entrada � determinado por digita��o de 0 (zero) em CNPJ, ou CPF, ou RA, ou outro que voc� definir.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int i, opcao;
typedef char string[100];
typedef struct{
    string cpf[100];
    string nome[100];
    float salario;
    string endereco[100];
    string cep[100];
    string estado[100];
    string cidade[100];
} funcionariosDados;

funcionariosDados funcionario[100];

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
    int verificador;

    system("cls");
    for(i = 0; i < 30; i++)
        putchar('*');
    printf("\n********** Cadastro **********\n");
    for(i = 0; i < 30; i++)
        putchar('*');
    printf("\n\n");

    verificaVetor();
    limpaVetor();

    cadastroCpf();
    cadastroNome();
    cadastroSalario();
    cadastroEndereco();
    cadastroCep();
    cadastroCidade();
    cadastroEstado();

    system("cls");
    printf("\nPor favor, confira os dados: \n");
    imprimeFuncionario();

    printf("\n\nSe deseja continuar, digite 1\nSe deseja editar, digite 2: ");
    scanf("%d",&verificador);

    switch(verificador)
    {
        case 1:
            system("cls");
            printf("Usu�rio cadastro com sucesso! pressione qualquer tecla para voltar ao menu principal.");
            getch();
            system("cls");
            menu();
            break;

        case 2:
            editar(i);
            break;
    }
}

/*editar(indice)
{
    indice = i;
    printf("\n\n************ Editar ************");
    printf("\n1. >> Editar CPF");
    printf("\n2. >> Editar nome");
    printf("\n3. >> Editar sal�rio");
    printf("\n4. >> Editar endere�o");
    printf("\n5. >> Editar CEP");
    printf("\n6. >> Editar estado");
    printf("\n7. >> Editar cidade");

    printf("\n\nEscolha uma op��o: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
    case 1:
        cadastroCpf();
        break;

    case 2:

        break;

    case 3:

        break;

    case 4:

        break;

    case 5:

        break;

    case 6:

        break;
    }
}
*/
excluir()
{
}

mostrarFuncionarios()
{

}

sair()
{

}

verificaVetor()
{
    for(i = 0; i < 100; i++)
    {
        if (funcionario[i].salario < 1000 || funcionario[i].salario > 100000)
            return i;
            break;
    }
}

limpaVetor()
{
    strcpy(funcionario[i].cpf, "NULL");
    strcpy(funcionario[i].nome, "NULL");
    funcionario[i].salario = 0.0;
    strcpy(funcionario[i].endereco, "NULL");
    strcpy(funcionario[i].cep, "NULL");
    strcpy(funcionario[i].estado, "NULL");
    strcpy(funcionario[i].cidade, "NULL");
}
cadastroCpf()
{
    printf("\nDigite o cpf do funcion�rio: ");
    fflush(stdin);
    scanf("%s",&funcionario[i].cpf);
}
cadastroNome()
{
    printf("\nDigite o nome do funcion�rio: ");
    fflush(stdin);
    scanf("%[A-Z a-z]",funcionario[i].nome);
}
cadastroSalario()
{
    printf("\nDigite o sal�rio do funcion�rio: ");
    fflush(stdin);
    scanf("%f",&funcionario[i].salario);
}
cadastroEndereco()
{
    printf("\nDigite o endere�o: ");
    fflush(stdin);
    scanf("%[A-Z a-z 0-9]",funcionario[i].endereco);
}
cadastroCep()
{
    printf("\nDigite o CEP: ");
    fflush(stdin);
    scanf("%[A-Z a-z 0-9]",funcionario[i].cep);
}
cadastroEstado()
{
    printf("\nDigite o estado: ");
    fflush(stdin);
    scanf("%[A-Z a-z]",funcionario[i].estado);
}
cadastroCidade()
{
    printf("\nDigite a cidade: ");
    fflush(stdin);
    scanf("%[A-Z a-z]",funcionario[i].cidade);
}
imprimeFuncionario()
{
    printf("\nCPF: %s",funcionario[i].cpf);
    printf("\nNome: %s",funcionario[i].nome);
    printf("\nSalario: %.2f",funcionario[i].salario);
    printf("\nEndere�o: %s",funcionario[i].endereco);
    printf("\nFuncionario: %s",funcionario[i].cep);
    printf("\nEstado: %s",funcionario[i].estado);
    printf("\nCidade: %s",funcionario[i].cidade);
}
