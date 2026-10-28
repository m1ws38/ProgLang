
#include <iostream>

int main() {
    int a = 5, b = 10;

    std::cout << "Before:" << '\n';
    std::cout << "a = " << a << ", b = " << b << '\n';

    a, b = b, a;

    std::cout << "After:" << '\n';
    std::cout << "a = " << a << ", b = " << b << '\n';

    return 0;
}
