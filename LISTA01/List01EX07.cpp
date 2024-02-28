#include <iostream>

using namespace std;

int main() {
    cout << "Números múltiplos de 5 no intervalo de 1 a 500:\n";

    // Loop de 1 a 500
    for (int i = 1; i <= 500; ++i) {
        
        if (i % 5 == 0) {

            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
