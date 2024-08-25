#include <iostream>

int fibonacciRecursivo(int n) {
    if (n <= 1) return n;
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

int fibonacciIterativo(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int posicao;
    std::cout << "Digite a posicao desejada na sequencia de Fibonacci: ";
    std::cin >> posicao;

    std::cout << "Valor Recursivo: " << fibonacciRecursivo(posicao) << std::endl;
    std::cout << "Valor Iterativo: " << fibonacciIterativo(posicao) << std::endl;

    return 0;
}
