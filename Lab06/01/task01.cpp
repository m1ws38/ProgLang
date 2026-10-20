#include <cmath>
#include <iostream>

int main() {
    double x = 0;

    const auto Pi1 = std::acos(0) * 2;
    // constexpr auto Pi2 = std::acos(0) * 2;  // ошибка до C++26
    const auto Pi3 = std::acos(x) * 2;
    // constexpr auto Pi4 = std::acos(x) * 2;  // x не является константой

    std::cout << Pi1 << '\n' << Pi3 << '\n';
}
