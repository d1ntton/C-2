#include <iostream>

void minutosParaHoras(int totalMinutos, int &hora, int &minuto) {
    hora = totalMinutos / 60;
    minuto = totalMinutos % 60;
}

int main() {
    int totalMinutos, horaAtual, minutoAtual;
    std::cout << "Digite o total de minutos desde meia-noite: ";
    std::cin >> totalMinutos;
    std::cout << "Digite a hora atual: ";
    std::cin >> horaAtual;
    std::cout << "Digite o minuto atual: ";
    std::cin >> minutoAtual;

    int hora, minuto;
    minutosParaHoras(totalMinutos, hora, minuto);
    std::cout << "Horas: " << (horaAtual + hora) << ", Minutos: " << (minutoAtual + minuto) << std::endl;
    return 0;
}
