
#include <iostream>

int main() {
    int x = 2, y = 3, z = 5;

    x = x + 1;
    z = z + 2 * x + 3 * y;
    y = y + 1;

    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "z = " << z << '\n';

    return 0;
}
