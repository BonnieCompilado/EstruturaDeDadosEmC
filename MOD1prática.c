#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 50
#define TAM_STRING 100

typedef struct {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
} Livro;

void limparBufferEntrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);}

int main(){
    Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    do{
        printf("=======================================\n");
        printf("BIBLIOTECA PARTE 01\n");
        printf("=======================================\n");
        printf("1. Cadastrar novo livro\n");
        printf("2. Listar todos os livros\n");
        printf("3. Sair\n");

        scanf("%d", &opcao);
        limparBufferEntrada();

        switch (opcao){
            case 1:
                printf("\nCADASTRO DE NOVO LIVRO\n");

                if (totalLivros < MAX_LIVROS){
                    printf("Digite o nome do livro: ");
                    fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                    printf("Digite o autor do livro: ");
                    fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                    printf("Digite a editora do livro: ");
                    fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                    printf("Digite a edição do livro: ");
                    fgets("%d", &biblioteca[totalLivros].edicao);

                    printf("\nLivro cadastrado com sucesso!\n");

                    limparBufferEntrada();

                    totalLivros++;
                } else {
                    printf("\nBiblioteca está cheia! Não é possível mais cadastrar livros.\n")
                }
                printf("\n");
                getchar();
                break;

            case 2:
                prinf("\nLISTA DE LIVROS CADASTRADOS\n");

                if (totalLivros == 0){
                    printf("Nenhum livro ainda cadastrado");
                } else {
                    for(i = 0; i < totalLivros; i++) {
                        printf("---------------------------------------\n");
                        printf("LIVRO %d\n", i + 1)
                        printf("Nome: %s\n", biblioteca[i].nome);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edição: %d", biblioteca[i].edicao);
                    }
                    printf("---------------------------------------\n");
                }
                printf("\n");
                getchar();

            case 3:
                printf("\nSaindo...\n")
                break;

            default:
                printf("Opção inexistente. Selecione uma opção válida.\n");
                printf("\n");
                getchar();
                break;
        }
    } while (i != 0);

    return 0;
}