#include <iostream>

int somatorioRecursivo(int n) {
    if (n <= 0) return 0;
    return n + somatorioRecursivo(n - 1);
}

int somatorioIterativo(int n) {
    if (n <= 0) return 0;
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;
    std::cout << "Digite um valor N: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Valor inválido!" << std::endl;
    } else {
        std::cout << "Somatorio Recursivo: " << somatorioRecursivo(n) << std::endl;
        std::cout << "Somatorio Iterativo: " << somatorioIterativo(n) << std::endl;
    }

    return 0;
}
