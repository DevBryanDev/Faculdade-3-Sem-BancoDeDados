#include <iostream>

/*1.	Elabore um programa em C++ que solicite o peso e a
altura de uma determinada pessoa. Após a digitação, exibir se
esta pessoa está ou não com seu peso ideal, conforme tabela abaixo:*/

using namespace std;

int main()
{
    // Solicitar o peso e altura
    cout << "Digite o peso (em kg): ";
    double peso;b
    cin >> peso;

    cout << "Digite a altura (em metros): ";
    double altura;
    cin >> altura;

    // Calcular o IMC
    double imc = peso / (altura * altura);

    // Verificar e exibir o resultado
    cout << "IMC: " << imc << endl;

    if (imc < 20) {
        cout << "Abaixo do peso" << endl;
    } else if (imc >= 20 && imc < 25) {
        cout << "Peso Ideal" << endl;
    } else {
        cout << "Acima do Peso" << endl;
    }

    return 0;
}
