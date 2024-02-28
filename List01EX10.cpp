#include <iostream>

using namespace std;

int main() {
    
    int idade, opiniao, totalPessoas = 0, totalIdade = 0;
    int otimo = 0, bom = 0, regular = 0, ruim = 0;

    
    while (true) {
       
        cout << "Digite a idade do espectador (digite um número negativo para encerrar): ";
        cin >> idade;

       
        if (idade < 0) {
            break;
        }

        
        cout << "Digite a opinião em relação ao filme (1 - Ótimo, 2 - Bom, 3 - Regular, 4 - Ruim): ";
        cin >> opiniao;

        
        totalPessoas++;
        totalIdade += idade;

        switch (opiniao) {
            case 1:
                otimo++;
                break;
            case 2:
                bom++;
                break;
            case 3:
                regular++;
                break;
            case 4:
                ruim++;
                break;
            default:
                cout << "Opinião inválida. Tente novamente.\n";
                totalPessoas--;  
        }
    }

    
    if (totalPessoas > 0) {
        double mediaIdade = static_cast<double>(totalIdade) / totalPessoas;
        double percentOtimo = (static_cast<double>(otimo) / totalPessoas) * 100;
        double percentBom = (static_cast<double>(bom) / totalPessoas) * 100;
        double percentRegular = (static_cast<double>(regular) / totalPessoas) * 100;
        double percentRuim = (static_cast<double>(ruim) / totalPessoas) * 100;

        cout << "\nResultados da Pesquisa:\n";
        cout << "A. Quantidade de pessoas que responderam a pesquisa: " << totalPessoas << " pessoas\n";
        cout << "B. Média de idade das pessoas que responderam a pesquisa: " << mediaIdade << " anos\n";
        cout << "C. Porcentagem de respostas:\n";
        cout << "   Ótimo: " << percentOtimo << "%\n";
        cout << "   Bom: " << percentBom << "%\n";
        cout << "   Regular: " << percentRegular << "%\n";
        cout << "   Ruim: " << percentRuim << "%\n";
    } else {
        cout << "Nenhuma pessoa respondeu a pesquisa.\n";
    }

    return 0;
}
