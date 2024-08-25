#include <iostream>

int pesquisaBinaria(int arr[], int tamanho, int valor) {
    int inicio = 0, fim = tamanho - 1;
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        if (arr[meio] == valor) {
            return meio;
        }
        if (arr[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    for (int valor : {75, 22, 90}) {
        int resultado = pesquisaBinaria(arr, tamanho, valor);
        if (resultado != -1) {
            std::cout << "Valor " << valor << " encontrado na posicao: " << resultado << std::endl;
        } else {
            std::cout << "Valor " << valor << " nao encontrado." << std::endl;
        }
    }

    return 0;
}
