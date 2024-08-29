// Fazer um programa em C++ que leia uma matriz inteira de dimensões M x N (M<=20, N<=25), onde M e N são lidos. Calcule e escreva:
//- A matriz transposta
//- A multiplicação da matriz por um fator K informado pelo usuário;
//- A adição com uma segunda matriz informada pelo usuário;
//As matrizes informadas pelo usuário não devem ser alteradas.
//O programa deve utilizar pelo menos uma função para ler os valores a serem  armazenados nas matrizes, uma função para calcular a matriz transposta, uma função  para calcular a multiplicação por K e uma função para fazer a adição das matrizes.
#include <iostream>

using namespace std;

const int MAX_LINHAS = 20;
const int MAX_COLUNAS = 25;

// Funcao para ler uma matriz de dimensoes MxN
void lerMatriz(int matriz[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas) {
    cout << "Digite os valores da matriz (" << linhas << "x" << colunas << "):" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz[i][j];
        }
    }
}

// Funcao para calcular a transposta de uma matriz
void calcularTransposta(int matriz[MAX_LINHAS][MAX_COLUNAS], int matrizTransposta[MAX_COLUNAS][MAX_LINHAS], int linhas,
                        int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizTransposta[j][i] = matriz[i][j];
        }
    }
}

// Funcao para multiplicar uma matriz por um fator
void multiplicarPorFator(int matriz[MAX_LINHAS][MAX_COLUNAS], int matrizResultado[MAX_LINHAS][MAX_COLUNAS], int linhas,
                         int colunas, int fator) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizResultado[i][j] = matriz[i][j] * fator;
        }
    }
}

// Funcao para somar duas matrizes
void somarMatrizes(int matriz1[MAX_LINHAS][MAX_COLUNAS], int matriz2[MAX_LINHAS][MAX_COLUNAS],
                   int matrizResultado[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Funcao para exibir uma matriz
template<int N>
void exibirMatriz(int matriz[][N], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int numeroLinhas, numeroColunas, fatorMultiplicacao;

    // Ler as dimensoes da matriz
    cout << "Digite o numero de linhas (M <= 20): ";
    cin >> numeroLinhas;
    if (numeroLinhas > MAX_LINHAS) {
        cout << "Erro: O numero de linhas nao pode exceder " << MAX_LINHAS << "." << endl;
        return 1;
    }

    cout << "Digite o numero de colunas (N <= 25): ";
    cin >> numeroColunas;
    if (numeroColunas > MAX_COLUNAS) {
        cout << "Erro: O numero de colunas nao pode exceder " << MAX_COLUNAS << "." << endl;
        return 1;
    }

    // Declarar as matrizes
    int matrizOriginal[MAX_LINHAS][MAX_COLUNAS], matrizTransposta[MAX_COLUNAS][MAX_LINHAS];
    int matrizMultiplicada[MAX_LINHAS][MAX_COLUNAS], matrizSoma[MAX_LINHAS][MAX_COLUNAS];
    int segundaMatriz[MAX_LINHAS][MAX_COLUNAS];

    // Ler a primeira matriz
    lerMatriz(matrizOriginal, numeroLinhas, numeroColunas);

    // Calcular a matriz transposta
    calcularTransposta(matrizOriginal, matrizTransposta, numeroLinhas, numeroColunas);
    cout << "Matriz Transposta:" << endl;
    exibirMatriz(matrizTransposta, numeroColunas, numeroLinhas);

    // Ler o fator para multiplicacao
    cout << "Digite o valor do fator para multiplicar a matriz: ";
    cin >> fatorMultiplicacao;

    // Multiplicar a matriz pelo fator
    multiplicarPorFator(matrizOriginal, matrizMultiplicada, numeroLinhas, numeroColunas, fatorMultiplicacao);
    cout << "Matriz multiplicada por " << fatorMultiplicacao << ":" << endl;
    exibirMatriz(matrizMultiplicada, numeroLinhas, numeroColunas);

    // Ler a segunda matriz para a adicao
    cout << "Digite os valores da segunda matriz:" << endl;
    lerMatriz(segundaMatriz, numeroLinhas, numeroColunas);

    // Somar as duas matrizes
    somarMatrizes(matrizOriginal, segundaMatriz, matrizSoma, numeroLinhas, numeroColunas);
    cout << "Resultado da soma das matrizes:" << endl;
    exibirMatriz(matrizSoma, numeroLinhas, numeroColunas);

    return 0;
}