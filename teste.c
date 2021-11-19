//   Dados dos funcionários (CPF, nome, salário mensal com dias casas decimais, endereço, CEP, estado e cidade)
/* A entrada conterá vários casos de teste. Cada caso de teste deverá receber os dados pelo teclado.
 final da entrada é determinado por digitação de 0 (zero) em CNPJ, ou CPF, ou RA, ou outro que você definir.*/

 /*for(i=0; i<10; i++) {
    printf(" Digite nome do funcionário: ");
    scanf("%s%*c", &func[i].nome);
    printf(" Digite a idade do funcionário: ");
    scanf("%d%*c", &func[i].idade);
    printf(" Digite o salário do funcionário: ");
    scanf("%f%*c", &func[i].salario);
}
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int i, opcao;
int sair = 0;
typedef char string[100];


typedef struct
{ //estrutura de dados do funcionário
    string cpf[100];
    string nome[100];
    float salario;
    string endereco[100];
    string cep[100];
    string estado[100];
    string cidade[100];
} funcionariosDados;

funcionariosDados funcionario[100];

char retornoCpf[50];

void main()
 {
    setlocale(LC_ALL,"");
    do // loop menu -> programa principal
    {
        system("cls");
        menu();
        principal();
    } while (sair != 1);

 }

menu() // interface do menu e seleção de função
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

principal() //escolhe a função a ser executada
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
        encerrar();
        break;
    }
}

pesquisar()
{
    system("cls");
    printf("Digite o CPF do funcionário desejado: ");
    scanf("%s",&retornoCpf);

    for (i = 0; i < 100; i++)
    {
        if (strcmp(retornoCpf, funcionario[i].cpf) == 0)
        {
            printf("\nFuncionario %d",i+1);
            imprimeFuncionario();
        }
        else
        {
            printf("\nNenhum usuário encontrado");
            break;
        }
    }
    getch();
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
            break;
        case 2:
            editar(i);
            break;
    }
}

editar(indice)
{
    indice = i;

    do
    {
        printf("\n\n************ Editar ************");

        printf("\n1. >> Editar CPF");
        printf("\n2. >> Editar nome");
        printf("\n3. >> Editar salário");
        printf("\n4. >> Editar endereço");
        printf("\n5. >> Editar CEP");
        printf("\n6. >> Editar estado");
        printf("\n7. >> Editar cidade");
        printf("\n8. >> Sair");

        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                cadastroCpf();
                break;

            case 2:
                cadastroNome();
                break;

            case 3:
                cadastroSalario();
                break;

            case 4:
                cadastroEndereco();
                break;

            case 5:
                cadastroCep();
                break;

            case 6:
                cadastroEstado();
                break;

            case 7:
                cadastroCidade();
                break;
        }

        system("cls");

        if (opcao != 8)
            imprimeFuncionario();

    } while (opcao != 8);



    printf("\nPressione qualquer tecla para retornar ao menu principal");
    getch();
}

excluir()
{
    int indicador;

    do
    {
        for (i = 0; i < 100; i++)
        {
            if (funcionario[i].salario != 0)
            {
                system("cls");
                printf("\nFuncionario %d",i+1);
                imprimeFuncionario();
                sair = 1;
                limpaVetor();
                break;
            }
            else
            {
                printf("Nenhum funcionário cadastro, pressione qualquer tecla para voltar ao menu");
                getch();
                break;
            }
        }
    } while (sair == 0);

    /*
    printf("\n\nEscolha o número do usuário a ser excluído: ");
    scanf("%d",&indicador);

    indicador = indicador - 1;
    strcpy(funcionario[indicador].cpf, "NULL");
    strcpy(funcionario[indicador].nome, "NULL");
    funcionario[indicador].salario = 0.0;
    strcpy(funcionario[indicador].endereco, "NULL");
    strcpy(funcionario[indicador].cep, "NULL");
    strcpy(funcionario[indicador].estado, "NULL");
    strcpy(funcionario[indicador].cidade, "NULL");

    printf("\nPressione qualquer tecla para retornar ao menu principal");
    getch();
    */
}

mostrarFuncionarios()
{
    for (i = 0; i < 100; i++)
    {
        if (funcionario[i].salario != 0)
        {
            system("cls");
            printf("\nFuncionario %d",i+1);
            imprimeFuncionario();
            printf("\n\n\nPressione qualquer tecla para voltar ao menu");
            getch();
            break;
        }
        else
        {
            printf("Nenhum funcionário cadastro, pressione qualquer tecla para voltar ao menu");
            getch();
            break;
        }
    }
}

encerrar()
{
    system("cls");
    printf("Programa encerrado");
    sair = 1;
}

verificaVetor()
{
    for(i = 0; i < 100; i++)
    {
        if (funcionario[i].salario == 0)
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
    printf("\nCEP: %s",funcionario[i].cep);
    printf("\nEstado: %s",funcionario[i].estado);
    printf("\nCidade: %s",funcionario[i].cidade);
}
