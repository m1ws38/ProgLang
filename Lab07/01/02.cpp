
#include <iostream>

int main() {
    int x = 10, y = 3;

    x = 15, y += x, x += y;

    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';

    return 0;
}
