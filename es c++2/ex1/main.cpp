#include <iostream>

void idadeEmAnosMesesDias(int dias) {
    int anos = dias / 365;
    dias %= 365;
    int meses = dias / 30;
    dias %= 30;

    std::cout << anos << " anos, " << meses << " meses, " << dias << " dias" << std::endl;
}

int main() {
    int dias;
    std::cout << "Digite a idade em dias: ";
    std::cin >> dias;
    idadeEmAnosMesesDias(dias);
    return 0;
}
