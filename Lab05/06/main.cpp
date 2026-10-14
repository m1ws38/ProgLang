#include <cmath>
#include <iostream>
#include <limits>

int main() {
    int n = 16384;
    long double s = std::pow(2.0L, n);
    std::cout << std::fixed << s << '\n';
    std::cout << std::numeric_limits<long double>::max_exponent << '\n';
}