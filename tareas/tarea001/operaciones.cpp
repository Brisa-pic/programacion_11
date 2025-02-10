#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    int suma = num1 + num2;
    int multiplicacion = num1 * num2;

    std::cout << "La suma es: " << suma << std::endl;
    std::cout << "La multiplicacion es: " << multiplicacion << std::endl;

    return 0;
}