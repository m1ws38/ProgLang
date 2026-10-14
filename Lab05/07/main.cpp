#include <iostream>
#include <limits>

int main() {
    double s = std::numeric_limits<double>::quiet_NaN();
    if (s != s)
        std::cout << "yes";
}