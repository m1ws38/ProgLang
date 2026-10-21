#include <iostream>

namespace circle {
constexpr double pi = 3.141592653589793;
double area(double radius) { return pi * radius * radius; }
}

namespace square {
double area(double side) { return side * side; }
}

int main() {
    std::cout << "Circle: " << circle::area(2.0) << '\n';
    std::cout << "Square: " << square::area(2.0) << '\n';
}
