#include <iostream>

void lerMatriz(int matriz[][25], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matriz[i][j];
        }
    }
}

void matrizTransposta(int matriz[][25], int transposta[][20], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void multiplicarMatriz(int matriz[][25], int m, int n, int k) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] *= k;
        }
    }
}

void adicionarMatriz(int matriz1[][25], int matriz2[][25], int resultado[][25], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int m, n;
    std::cout << "Digite as dimensões M e N (M <= 20, N <= 25): ";
    std::cin >> m >> n;


    if (m <= 0 || m > 20 || n <= 0 || n > 25) {
        std::cout << "Dimensões inválidas!" << std::endl;
        return 1;
    }

    int matriz[20][25], matrizTransposta[25][20], matriz2[20][25], resultado[20][25];

    std::cout << "Digite os elementos da matriz 1:\n";
    lerMatriz(matriz, m, n);

    std::cout << "Digite os elementos da matriz 2:\n";
    lerMatriz(matriz2, m, n);

    matrizTransposta(matriz, matrizTransposta, m, n);
    std::cout << "Matriz Transposta:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matrizTransposta[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int k;
    std::cout << "Digite o fator K: ";
    std::cin >> k;
    multiplicarMatriz(matriz, m, n, k);
    std::cout << "Matriz multiplicada por K:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    adicionarMatriz(matriz, matriz2, resultado, m, n);
    std::cout << "Resultado da adição das matrizes:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << resultado[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

