
#include <iostream>
#include <vector>

int main() {
    int i = 0;
    std::vector<int> x(10);

    std::cin >> i >> x[i];

    std::cout << x[i] << '\n';

    return 0;
}
