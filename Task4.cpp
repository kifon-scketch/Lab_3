#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int max_days = 0;
    int max_hours = 0;

    std::cout << "Введите количество дней (1..8): ";
    std::cin >> max_days;
    std::cout << "Введите количество часов (1..8): ";
    std::cin >> max_hours;

    if (max_days < 1 || max_days > 8 || max_hours < 1 || max_hours > 8) {
        std::cout << "Ошибка: значения должны быть в диапазоне от 1 до 8." << std::endl;
        return 1;
    }

    std::cout << "Сетка наблюдений" << std::endl;

    int total_measurements = 0;

    for (int day = 1; day <= max_days; ++day) {
        for (int hour = 1; hour <= max_hours; ++hour) {
            std::cout << "D" << day << "-H" << hour << " ";
            total_measurements++;
        }
        std::cout << std::endl;
    }

    std::cout << "Общее количество измерений: " << total_measurements << std::endl;

    return 0;
}
