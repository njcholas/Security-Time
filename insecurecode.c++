#include <iostream>
#include <cstring>

int main() {
    char buffer[10];
    char userInput[20];

    std::cout << "Digite uma entrada: ";
    std::cin >> userInput;

    // Vulnerabilidade: Não há verificação de limite
    strcpy(buffer, userInput);

    std::cout << "Buffer: " << bu ffer << std::endl;

    return 0;
}
