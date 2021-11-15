//   Dados dos funcionários (CPF, nome, salário mensal com dias casas decimais, endereço, CEP, estado e cidade)
/* A entrada conterá vários casos de teste. Cada caso de teste deverá receber os dados pelo teclado.
 final da entrada é determinado por digitação de 0 (zero) em CNPJ, ou CPF, ou RA, ou outro que você definir.*/

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
            printf("Usuário cadastro com sucesso! pressione qualquer tecla para voltar ao menu principal.");
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
    printf("\n3. >> Editar salário");
    printf("\n4. >> Editar endereço");
    printf("\n5. >> Editar CEP");
    printf("\n6. >> Editar estado");
    printf("\n7. >> Editar cidade");

    printf("\n\nEscolha uma opção: ");
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
    printf("\nDigite o cpf do funcionário: ");
    fflush(stdin);
    scanf("%s",&funcionario[i].cpf);
}
cadastroNome()
{
    printf("\nDigite o nome do funcionário: ");
    fflush(stdin);
    scanf("%[A-Z a-z]",funcionario[i].nome);
}
cadastroSalario()
{
    printf("\nDigite o salário do funcionário: ");
    fflush(stdin);
    scanf("%f",&funcionario[i].salario);
}
cadastroEndereco()
{
    printf("\nDigite o endereço: ");
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
    printf("\nEndereço: %s",funcionario[i].endereco);
    printf("\nFuncionario: %s",funcionario[i].cep);
    printf("\nEstado: %s",funcionario[i].estado);
    printf("\nCidade: %s",funcionario[i].cidade);
}
