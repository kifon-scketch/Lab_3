#include <iostream>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "Введите количество дней (1-31): ";
    std::cin >> n;

    if (n < 1 || n > 31) {
        std::cout << "Ошибка: число должно быть в диапазоне от 1 до 31." << std::endl;
        return 1;
    }

    double sum = 0;

    for (int i = 1; i <= n; ++i) {
        int t = 5 + i % 7;
        std::cout << "День " << i << ": " << t << " °C" << std::endl;
        sum += t; 
    }

    double average = sum / n;
    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "\nСредняя температура за " << n << " дн.: " << average << " °C" << std::endl;

    return 0;
}
   
