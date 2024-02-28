#include <iostream>

/*3.	Faça um programa em C++ que receba o número de horas
trabalhadas e o valor do salário mínimo. Calcule e mostre o
salário a receber seguindo as regras abaixo:*/

using namespace std;

int main() {

    double salario;


    cout << "Digite o salário do funcionário: R$ ";
    cin >> salario;


    if (salario < 1000) {
        salario *= 1.15;  // Reajuste de 15%
    } else if (salario >= 1000 && salario <= 1500) {
        salario *= 1.10;  // Reajuste de 10%
    } else if (salario > 1500) {
        salario *= 1.05;  // Reajuste de 5%
    }

    cout << "Novo salário do funcionário: R$ " << salario << endl;

    return 0;
}

