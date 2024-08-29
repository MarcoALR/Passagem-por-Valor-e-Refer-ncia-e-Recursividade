#include <iostream>
using namespace std;

// Função para converter minutos passados desde meia-noite em horas e minutos
void converterMinutosParaHora(int totalMinutos, int &horas, int &minutos) {
    horas = totalMinutos / 60;  // 1 hora = 60 minutos
    minutos = totalMinutos % 60; // Resto dos minutos após contar as horas
}

int main() {
    int minutosPassados;
    int horas, minutos;

    // Ler o total de minutos passados desde meia-noite
    cout << "Digite o número de minutos passados desde meia-noite: ";
    cin >> minutosPassados;

    // Chamada da função para converter os minutos
    converterMinutosParaHora(minutosPassados, horas, minutos);

    // Exibir o resultado no formato de horas e minutos
    cout << "Hora atual: " << horas << " horas e "
         << minutos << " minutos." << endl;

    return 0;
}