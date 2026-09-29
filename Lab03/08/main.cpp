#include <iostream>

int main() {
    int x, y, z;

    std::cin >> x >> y >> z;

    std::cout << ((x == y) + (x == z) == true) << std::endl;

    return 0;
}