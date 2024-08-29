#include <iostream>
using namespace std;

// Função para converter idade de dias para anos, meses e dias
void converterIdade(int totalDias, int &anos, int &meses, int &dias) {
    anos = totalDias / 365;          // 1 ano = 365 dias
    totalDias %= 365;                // Resto dos dias após contar os anos
    meses = totalDias / 30;          // 1 mês = 30 dias (aproximadamente)
    dias = totalDias % 30;           // Resto dos dias após contar os meses
}

int main() {
    int idadeEmDias;
    int anos, meses, dias;

    // Ler a idade em dias
    cout << "Digite a idade em dias: ";
    cin >> idadeEmDias;

    // Chamada da função para converter a idade
    converterIdade(idadeEmDias, anos, meses, dias);

    // Exibir o resultado em anos, meses e dias
    cout << "Idade: " << anos << " anos, "
         << meses << " meses e "
         << dias << " dias." << endl;

    return 0;
}