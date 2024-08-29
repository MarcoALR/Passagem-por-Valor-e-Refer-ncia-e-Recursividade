#include <iostream>

using namespace std;

// Função recursiva para calcular o n-ésimo termo da sequência de Fibonacci
int fibonacciRecursivo(int n) {
    if (n <= 1)
        return n;
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

// Função iterativa para calcular o n-ésimo termo da sequência de Fibonacci
int fibonacciIterativo(int n) {
    if (n <= 1)
        return n;

    int a = 0, b = 1, c;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;
    cout << "Digite a posição desejada na sequência de Fibonacci: ";
    cin >> n;

    // Resultado recursivo
    cout << "Fibonacci Recursivo: " << fibonacciRecursivo(n) << endl;

    // Resultado iterativo
    cout << "Fibonacci Iterativo: " << fibonacciIterativo(n) << endl;

    return 0;
}