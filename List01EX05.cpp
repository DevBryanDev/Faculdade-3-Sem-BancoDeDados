#include <iostream>

using namespace std;

int main() {
    // Declaração de variáveis
    double precoEtiqueta, valorPago;
     int codigoCondicaoPagamento;

    // Solicitação do preço de etiqueta e do código de condição de pagamento ao usuário
    cout << "Digite o preço de etiqueta do produto: R$ ";
    cin >> precoEtiqueta;

    cout << "Digite o código da condição de pagamento:\n";
    cout << "1 - À vista em dinheiro ou cheque\n";
    cout << "2 - À vista com cartão de crédito\n";
    cout << "3 - Em 2 vezes preço normal\n";
    cout << "4 - Em 3 vezes preço com acréscimo de 10%\n";
    cin >> codigoCondicaoPagamento;

    // Cálculo do valor a ser pago com base na condição de pagamento
    switch (codigoCondicaoPagamento) {
        case 1:
            valorPago = precoEtiqueta; 
        case 2:
            valorPago = precoEtiqueta * 1.05;  
            break;
        case 3:
            valorPago = precoEtiqueta / 2;  
            break;
        case 4:
            valorPago = precoEtiqueta * 1.10 / 3; 
            break;
        default:
            cout << "Código de condição de pagamento inválido.\n";
            return 1; 
    }

    // Exibição do valor a ser pago
    cout << "Valor a ser pago: R$ " << valorPago << endl;

    return 0;
}

