#include <iostream>

/*3.	Fa�a um programa em C++ que receba o n�mero de horas
trabalhadas e o valor do sal�rio m�nimo. Calcule e mostre o
sal�rio a receber seguindo as regras abaixo:*/

using namespace std;

int main() {

    double salario;


    cout << "Digite o sal�rio do funcion�rio: R$ ";
    cin >> salario;


    if (salario < 1000) {
        salario *= 1.15;  // Reajuste de 15%
    } else if (salario >= 1000 && salario <= 1500) {
        salario *= 1.10;  // Reajuste de 10%
    } else if (salario > 1500) {
        salario *= 1.05;  // Reajuste de 5%
    }

    cout << "Novo sal�rio do funcion�rio: R$ " << salario << endl;

    return 0;
}

