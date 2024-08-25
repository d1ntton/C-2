#include <iostream>

void segundosParaTempo(int segundos, int &horas, int &minutos, int &segundosRestantes) {
    horas = segundos / 3600;
    segundos %= 3600;
    minutos = segundos / 60;
    segundosRestantes = segundos % 60;
}

int main() {
    int segundos;
    std::cout << "Digite o tempo em segundos: ";
    std::cin >> segundos;

    int horas, minutos, segundosRestantes;
    segundosParaTempo(segundos, horas, minutos, segundosRestantes);
    std::cout << horas << " horas, " << minutos << " minutos, " << segundosRestantes << " segundos" << std::endl;
    return 0;
}
