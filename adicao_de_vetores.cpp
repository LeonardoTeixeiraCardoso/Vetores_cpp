#include <iostream>
using namespace std;

int main() {
    int v1[3], v2[3], v3[3], soma[3];

    // Leitura do primeiro vetor
    cout << "Digite os 3 valores do vetor 1:\n";
    for (int i = 0; i < 3; i++)
        cin >> v1[i];

    // Leitura do segundo vetor
    cout << "Digite os 3 valores do vetor 2:\n";
    for (int i = 0; i < 3; i++)
        cin >> v2[i];

    // Leitura do terceiro vetor
    cout << "Digite os 3 valores do vetor 3:\n";
    for (int i = 0; i < 3; i++)
        cin >> v3[i];

    // Soma dos vetores
    for (int i = 0; i < 3; i++)
        soma[i] = v1[i] + v2[i] + v3[i];

    // Exibição do vetor soma
    cout << "\nVetor resultado da soma:\n";
    for (int i = 0; i < 3; i++)
        cout << soma[i] << " ";

    cout << endl;
    return 0;
}

