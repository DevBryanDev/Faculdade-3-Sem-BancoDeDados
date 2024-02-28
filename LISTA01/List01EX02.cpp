#include <iostream>

/*2.	Elaborar um programa em C++ em que dada a idade de um nadador,
classifique-o em uma das seguintes categorias: infantil A (de 5 a 7 anos),
infantil B (de 8 a 10 anos), juvenil A (de 11 a 13 anos),
juvenil B (14 a 17 anos) e senior (maior que 17 anos)*/

using namespace std;

int main() {

    int idade;

    // Solicita��o da idade ao usu�rio
    cout << "Digite a idade do nadador: ";
    cin >> idade;

    // Classifica��o do nadador com base na idade
    if (idade >= 5 && idade <= 7) {
        cout << "Categoria: Infantil A" << endl;
    } else if (idade >= 8 && idade <= 10) {
        cout << "Categoria: Infantil B" << endl;
    } else if (idade >= 11 && idade <= 13) {
        cout << "Categoria: Juvenil A" << endl;
    } else if (idade >= 14 && idade <= 17) {
        cout << "Categoria: Juvenil B" << endl;
    } else if (idade > 17) {
        cout << "Categoria: S�nior" << endl;
    } else {
        cout << "Idade n�o atende a nenhuma categoria v�lida." << endl;
    }

    return 0;
}
