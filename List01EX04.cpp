#include <iostream>

using namespace std;

int main() {
    // Declaração da variável para armazenar o salário
    double salario;

    // Solicitação do salário ao usuário
    cout << "Digite o salário do funcionário: R$ ";
    cin >> salario;

    // Verificação das condições e aplicação do reajuste
    if (salario < 1000) {
        salario *= 1.15;  // Reajuste de 15%
    } else if (salario >= 1000 && salario <= 1500) {
        salario *= 1.10;  // Reajuste de 10%
    } else if (salario > 1500) {
        salario *= 1.05;  // Reajuste de 5%
    }

    // Exibição do novo salário
    cout << "Novo salário do funcionário: R$ " << salario << endl;

    return 0;
}
