
#include <iostream>

int main() {
    int x = 5, y = 10;

    (++x) = y;

    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';

    return 0;
}
