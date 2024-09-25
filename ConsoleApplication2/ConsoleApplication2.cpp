#include <iostream>
#include <Windows.h>

int main() {
    setlocale(LC_ALL, "ru");
    
    int number;
    int sum = 0;

    std::cout << "Введите числа: " << std::endl;

    while (true) {
        std::cin >> number;

        
        if (number == 0) {
            break;
        }
        sum += number;
    }

    std::cout << "Сумма всех чисел: " << sum << std::endl;

    return 0;
}