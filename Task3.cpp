#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    double humidity = 0.0;

    do {
        std::cout << "Введите влажность (от 0 до 100): ";
        std::cin >> humidity;

        if (humidity < 0 || humidity > 100) {
            std::cout << "Ошибка! Значение должно быть в диапазоне от 0 до 100.\n";
        }
    } while (humidity < 0 || humidity > 100);

    double remaining = 100.0 - humidity;

    std::cout << "До 100% осталось: " << remaining << "%" << std::endl;

    return 0;
}
