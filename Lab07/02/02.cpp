
#include <iostream>

int main() {
    int x = 2, y = 3, z = 5;

    x += 1, z += 2 * x + 3 * y, y += 1;

    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "z = " << z << '\n';

    return 0;
}
