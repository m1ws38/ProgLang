#include <iostream>

int main() {
    int x;
    std::cin >> x;

    int y = ~x + 1;

    std::cout << y << std::endl;

    return 0;
}