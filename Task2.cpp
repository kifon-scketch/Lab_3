#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    int temperature = 0;
    int total_valid_count = 0; 
    int negative_count = 0;    

    std::cout << "Вводите значения температуры (для окончания ввода введите 999):" << std::endl;

    std::cin >> temperature;

    while (temperature != 999) {
        total_valid_count++; 

        if (temperature < 0) {
            negative_count++; 
        }

        std::cin >> temperature;
    }

    std::cout << "Результаты:" << std::endl;
    std::cout << "Количество корректно введённых температур: " << total_valid_count << std::endl;
    std::cout << "Из них отрицательных: " << negative_count << std::endl;

    return 0;
}
