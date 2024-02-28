#include <iostream>

using namespace std;

int main() {
   
    int numeroAluno, numeroAlunoMaisAlto, numeroAlunoMaisBaixo;
    double altura, alturaMaisAlta = 0, alturaMaisBaixa = 0;

    
    for (int i = 1; i <= 10; ++i) {
       
        cout << "Digite o número do aluno " << i << ": ";
        cin >> numeroAluno;

        cout << "Digite a altura do aluno " << i << " em centímetros: ";
        cin >> altura;

      
        if (i == 1 || altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
            numeroAlunoMaisAlto = numeroAluno;
        }

        
        if (i == 1 || altura < alturaMaisBaixa) {
            alturaMaisBaixa = altura;
            numeroAlunoMaisBaixo = numeroAluno;
        }
    }

   
    cout << "\nResultados:\n";
    cout << "Aluno mais alto: Número " << numeroAlunoMaisAlto << ", Altura: " << alturaMaisAlta << " cm\n";
    cout << "Aluno mais baixo: Número " << numeroAlunoMaisBaixo << ", Altura: " << alturaMaisBaixa << " cm\n";

    return 0;
}
