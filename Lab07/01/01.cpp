#include <iostream>
#include <algorithm>

int main() {
    int x = 10, y = 3;

    std::cout << std::min(x = 15, x + y) << '\n';
    std::cout << "x = " << x << '\n';

    return 0;
}
