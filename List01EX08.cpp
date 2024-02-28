#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigoVoto;
    int totalVotos = 0, votosCandidato1 = 0, votosCandidato2 = 0, votosNulos = 0, votosBrancos = 0;

    cout << "Digite o código do candidato (1, 2), 3 para voto nulo, 4 para voto em branco. Digite 0 para encerrar:\n";

    
    do {
        cout << "Código do voto: ";
        cin >> codigoVoto;

        
        switch (codigoVoto) {
            case 1:
                votosCandidato1++;
                break;
            case 2:
                votosCandidato2++;
                break;
            case 3:
                votosNulos++;
                break;
            case 4:
                votosBrancos++;
                break;
            case 0:
                break;  // Encerra o loop
            default:
                cout << "Código de voto inválido. Tente novamente.\n";
        }

        totalVotos++;

    } while (codigoVoto != 0);

    // Cálculo dos percentuais
    double percentualCandidato1 = (static_cast<double>(votosCandidato1) / totalVotos) * 100;
    double percentualCandidato2 = (static_cast<double>(votosCandidato2) / totalVotos) * 100;
    double percentualNulos = (static_cast<double>(votosNulos) / totalVotos) * 100;
    double percentualBrancos = (static_cast<double>(votosBrancos) / totalVotos) * 100;

    // Exibição dos resultados
    cout << fixed << setprecision(2);
    cout << "\nResultados da Eleição:\n";
    cout << "Percentual de votos para o Candidato 1: " << percentualCandidato1 << "%\n";
    cout << "Percentual de votos para o Candidato 2: " << percentualCandidato2 << "%\n";
    cout << "Percentual de votos nulos: " << percentualNulos << "%\n";
    cout << "Percentual de votos em branco: " << percentualBrancos << "%\n";

    return 0;
}
