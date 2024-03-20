#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanho];


    cout << "Digite 10 valores inteiros:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vetor[i];
    }


    cout << "\nConteúdos na ordem normal:" << endl;
    int *ptr = vetor;
    for (int i = 0; i < tamanho; ++i) {
        cout << *ptr << " ";
        ++ptr;
    }

    cout << "\nConteúdos na ordem inversa:" << endl;
    ptr = vetor + tamanho - 1;
    for (int i = 0; i < tamanho; ++i) {
        cout << *ptr << " ";
        --ptr;
    }

    cout << endl;

    return 0;
}
