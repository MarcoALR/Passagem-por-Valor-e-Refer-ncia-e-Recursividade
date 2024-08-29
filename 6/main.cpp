//Calcular o somatório de 1 à N Recursivamente e Iterativamente.
// Valores  menores ou iguais a zero representam situações de erro.

#include <iostream>

using namespace std;

// Função recursiva para calcular o somatório de 1 até N
int somatorioRecursivo(int N) {
    if (N <= 0) {
        cout << "Erro: N deve ser maior que 0." << endl;
        return -1;  // Indica erro
    }
    if (N == 1) {
        return 1;
    }
    return N + somatorioRecursivo(N - 1);
}

// Função iterativa para calcular o somatório de 1 até N
int somatorioIterativo(int N) {
    if (N <= 0) {
        cout << "Erro: N deve ser maior que 0." << endl;
        return -1;  // Indica erro
    }
    int soma = 0;
    for (int i = 1; i <= N; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int N;

    // Ler o valor de N
    cout << "Digite o valor de N: ";
    cin >> N;

    // Calcular o somatório recursivo
    int resultadoRecursivo = somatorioRecursivo(N);
    if (resultadoRecursivo != -1) {
        cout << "Somatorio Iterativo de 1 ate " << N << " eh: " << resultadoRecursivo << endl;
    }

    // Calcular o somatório iterativo
    int resultadoIterativo = somatorioIterativo(N);
    if (resultadoIterativo != -1) {
        cout << "Somatorio Iterativo de 1 ate " << N << " eh: " << resultadoIterativo << endl;
    }

    return 0;
}