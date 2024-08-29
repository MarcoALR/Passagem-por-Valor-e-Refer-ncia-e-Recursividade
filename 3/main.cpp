#include <iostream>
using namespace std;

// Função para converter o tempo de segundos para horas, minutos e segundos
void converterTempo(int segundosTotais, int &horas, int &minutos, int &segundos) {
    horas = segundosTotais / 3600;  // 1 hora = 3600 segundos
    segundosTotais %= 3600;         // Resto dos segundos após contar as horas
    minutos = segundosTotais / 60;  // 1 minuto = 60 segundos
    segundos = segundosTotais % 60; // Resto dos segundos após contar os minutos
}

int main() {
    int tempoEmSegundos;
    int horas, minutos, segundos;

    // Entrada do tempo em segundos
    cout << "Digite o tempo de duração em segundos: ";
    cin >> tempoEmSegundos;

    // Chamada da função para converter o tempo
    converterTempo(tempoEmSegundos, horas, minutos, segundos);

    // Exibição do resultado
    cout << "Tempo convertido: " << horas << " horas, "
         << minutos << " minutos e " << segundos << " segundos." << endl;

    return 0;
}