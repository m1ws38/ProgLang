#include <iostream>

int main() {
    int a = 1, b = 2;
    int c = a + ++ b;

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "c = " << c << '\n';

    return 0;
}