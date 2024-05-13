#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Digite dois números: ";
    std::cin >> num1 >> num2;

    std::cout << "Soma: " << num1 + num2 << std::endl;
    std::cout << "Multiplicação: " << num1 * num2 << std::endl;

    if(num2 != 0) {
        std::cout << "Divisão: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Não é possível dividir por zero!" << std::endl;
    }

    return 0;
}
