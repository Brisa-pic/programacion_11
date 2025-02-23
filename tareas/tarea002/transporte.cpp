#include <iostream>

int main() {
    const int N = 100;
    const int E = 100 - ((50 *100)/100);
    const int S = 100 -((100 * 30)/100);

    int edad;
    std::string boleto;

    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    std::cout << "Elija el tipo de boleto correspondiente: Normal, Estudiante o Senior: ";
    std::cin >> boleto;

    if (edad < 5) {
        std::cout << "Su boleto es gratis." << std::endl;
    } else if ((edad > 60) && (boleto == "Senior")) {
        std::cout << "Su boleto cuesta: " << S << std::endl;
    } else if (boleto == "Estudiante") {
        std::cout << "Su boleto cuesta: " << E << std::endl;
    } else if (boleto == "Normal") {
        std::cout << "Su boleto cuesta: " << N << std::endl;
    } else {
        std::cout << "ERROR" << std::endl;
    }

    return 0;

}