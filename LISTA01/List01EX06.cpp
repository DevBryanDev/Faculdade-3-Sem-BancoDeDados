#include <iostream>

/*Aqui está um programa simples em C++ que exibe o quadrado dos números inteiros no intervalo de 1 a 20: */

using namespace std;

int main() {
    cout << "Quadrados dos números inteiros no intervalo de 1 a 20:\n";

    // Loop de 1 a 20
    for (int i = 1; i <= 20; ++i) {
        // Exibe o quadrado do número
        cout << "O quadrado de " << i << " é: " << i * i << endl;
    }

    return 0;
}
