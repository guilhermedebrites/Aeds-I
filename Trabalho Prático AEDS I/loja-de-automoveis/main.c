#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura do veículo
typedef struct {
    char placa[8];
    char marca[20];
    char modelo[20];
    int ano;
} Veiculo;

// Protótipos das funções
void listarVeiculos(Veiculo* veiculos, int numVeiculos);
void pesquisarVeiculo(Veiculo* veiculos, int numVeiculos);
void cadastrarVeiculo(Veiculo** veiculos, int* numVeiculos);
void editarVeiculo(Veiculo* veiculos, int numVeiculos);
void excluirVeiculo(Veiculo** veiculos, int* numVeiculos);
void gravarVeiculos(Veiculo* veiculos, int numVeiculos);
void carregarVeiculos(Veiculo** veiculos, int* numVeiculos);

int main() {
    Veiculo* veiculos = NULL;
    int numVeiculos = 0;
    int opcao;

    // Carregar os veículos do arquivo
    carregarVeiculos(&veiculos, &numVeiculos);

    do {
        printf("==== MENU PRINCIPAL ====\n");
        printf("1. Listar todos os veiculos\n");
        printf("2. Pesquisar um veiculo\n");
        printf("3. Cadastrar um veiculo\n");
        printf("4. Editar um veiculo\n");
        printf("5. Excluir um veiculo\n");
        printf("6. Sair do programa\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                listarVeiculos(veiculos, numVeiculos);
                break;
            case 2:
                pesquisarVeiculo(veiculos, numVeiculos);
                break;
            case 3:
                cadastrarVeiculo(&veiculos, &numVeiculos);
                break;
            case 4:
                editarVeiculo(veiculos, numVeiculos);
                break;
            case 5:
                excluirVeiculo(&veiculos, &numVeiculos);
                break;
            case 6:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }

        printf("\n");
    } while (opcao != 6);

    // Gravar os veículos no arquivo antes de sair
    gravarVeiculos(veiculos, numVeiculos);

    // Liberar a memória alocada para os veículos
    free(veiculos);

    return 0;
}

void listarVeiculos(Veiculo* veiculos, int numVeiculos) {
    printf("Total de veiculos: %d\n", numVeiculos);
    printf("==== LISTA DE VEICULOS ====\n");

    for (int i = 0; i < numVeiculos; i++) {
        printf("Placa: %s\n", veiculos[i].placa);
        printf("Marca: %s\n", veiculos[i].marca);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Ano: %d\n\n", veiculos[i].ano);
    }
}

void pesquisarVeiculo(Veiculo* veiculos, int numVeiculos) {
    char placa[8];
    int encontrado = 0;

    printf("Digite a placa do veiculo: ");
    scanf("%s", placa);

    for (int i = 0; i < numVeiculos; i++) {
        if (strcmp(veiculos[i].placa, placa) == 0) {
            printf("Veiculo encontrado:\n");
            printf("Placa: %s\n", veiculos[i].placa);
            printf("Marca: %s\n", veiculos[i].marca);
            printf("Modelo: %s\n", veiculos[i].modelo);
            printf("Ano: %d\n", veiculos[i].ano);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Veiculo nao encontrado!\n");
    }
}

void cadastrarVeiculo(Veiculo** veiculos, int* numVeiculos) {
    Veiculo novoVeiculo;

    printf("Digite a placa do veiculo: ");
    scanf("%s", novoVeiculo.placa);

    // Verificar se a placa já existe
    for (int i = 0; i < *numVeiculos; i++) {
        if (strcmp((*veiculos)[i].placa, novoVeiculo.placa) == 0) {
            printf("Ja existe um veiculo com essa placa!\n");
            return;
        }
    }

    printf("Digite a marca do veiculo: ");
    scanf("%s", novoVeiculo.marca);

    printf("Digite o modelo do veiculo: ");
    scanf("%s", novoVeiculo.modelo);

    printf("Digite o ano do veiculo: ");
    scanf("%d", &novoVeiculo.ano);

    // Alocar memória para o novo veículo
    *veiculos = (Veiculo*)realloc(*veiculos, (*numVeiculos + 1) * sizeof(Veiculo));

    // Adicionar o novo veículo ao final do array
    (*veiculos)[*numVeiculos] = novoVeiculo;

    (*numVeiculos)++;

    printf("Veiculo cadastrado com sucesso!\n");
}

void editarVeiculo(Veiculo* veiculos, int numVeiculos) {
    char placa[8];
    int encontrado = 0;

    printf("Digite a placa do veiculo: ");
    scanf("%s", placa);

    for (int i = 0; i < numVeiculos; i++) {
        if (strcmp(veiculos[i].placa, placa) == 0) {
            printf("Veiculo encontrado:\n");
            printf("Placa: %s\n", veiculos[i].placa);
            printf("Marca: %s\n", veiculos[i].marca);
            printf("Modelo: %s\n", veiculos[i].modelo);
            printf("Ano: %d\n", veiculos[i].ano);

            printf("Digite a nova marca do veiculo: ");
            scanf("%s", veiculos[i].marca);

            printf("Digite o novo modelo do veiculo: ");
            scanf("%s", veiculos[i].modelo);

            printf("Digite o novo ano do veiculo: ");
            scanf("%d", &veiculos[i].ano);

            printf("Veiculo atualizado com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Veiculo nao encontrado!\n");
    }
}

void excluirVeiculo(Veiculo** veiculos, int* numVeiculos) {
    char placa[8];
    int encontrado = 0;
    int posicao;

    printf("Digite a placa do veiculo: ");
    scanf("%s", placa);

    for (int i = 0; i < *numVeiculos; i++) {
        if (strcmp((*veiculos)[i].placa, placa) == 0) {
            printf("Veiculo encontrado:\n");
            printf("Placa: %s\n", (*veiculos)[i].placa);
            printf("Marca: %s\n", (*veiculos)[i].marca);
            printf("Modelo: %s\n", (*veiculos)[i].modelo);
            printf("Ano: %d\n", (*veiculos)[i].ano);

            printf("Deseja realmente excluir o veiculo? (1 - Sim, 0 - Nao): ");
            int confirmacao;
            scanf("%d", &confirmacao);

            if (confirmacao) {
                posicao = i;
                encontrado = 1;
                break;
            }
        }
    }

    if (encontrado) {
        // Deslocar os veículos à direita da posição a ser excluída para a esquerda
        for (int i = posicao; i < *numVeiculos - 1; i++) {
            (*veiculos)[i] = (*veiculos)[i + 1];
        }

        // Redimensionar o array de veículos para remover o último elemento
        *veiculos = (Veiculo*)realloc(*veiculos, (*numVeiculos - 1) * sizeof(Veiculo));

        (*numVeiculos)--;

        printf("Veiculo excluido com sucesso!\n");
    } else {
        printf("Veiculo nao encontrado!\n");
    }
}

void gravarVeiculos(Veiculo* veiculos, int numVeiculos) {
    FILE* arquivo = fopen("veiculos.dat", "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de veiculos!\n");
        return;
    }

    fwrite(&numVeiculos, sizeof(int), 1, arquivo);

    fwrite(veiculos, sizeof(Veiculo), numVeiculos, arquivo);

    fclose(arquivo);
}

void carregarVeiculos(Veiculo** veiculos, int* numVeiculos) {
    FILE* arquivo = fopen("veiculos.dat", "rb");

    if (arquivo == NULL) {
        printf("Arquivo de veiculos nao encontrado. Iniciando com 0 veiculos.\n");
        return;
    }

    fread(numVeiculos, sizeof(int), 1, arquivo);

    *veiculos = (Veiculo*)malloc(*numVeiculos * sizeof(Veiculo));

    fread(*veiculos, sizeof(Veiculo), *numVeiculos, arquivo);

    fclose(arquivo);
}
