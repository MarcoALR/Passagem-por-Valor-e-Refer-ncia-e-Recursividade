#include <iostream>
using namespace std;

// Função de Pesquisa Binária
int pesquisaBinaria(int arr[], int tamanho, int valor) {
    int esquerda = 0, direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Verifica se o valor está no meio
        if (arr[meio] == valor)
            return meio;

        // Se o valor for maior, ignore a metade esquerda
        if (arr[meio] < valor)
            esquerda = meio + 1;
            // Se o valor for menor, ignore a metade direita
        else
            direita = meio - 1;
    }

    // Se o valor não for encontrado
    return -1;
}

int main() {
    int arr[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    int valoresParaProcurar[] = {75, 22, 90};

    for (int valor : valoresParaProcurar) {
        int resultado = pesquisaBinaria(arr, tamanho, valor);
        if (resultado != -1)
            cout << "Valor " << valor << " encontrado na posição " << resultado << "." << endl;
        else
            cout << "Valor " << valor << " não encontrado no vetor." << endl;
    }

    return 0;




}