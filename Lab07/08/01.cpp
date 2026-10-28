
#include <iostream>

int main() {
    int s = 0;

    for (int i = 0, j = 5;
         i + j <= 16;
         (i < j ? i : j)++) {

        (s += i) += j;
    }

    std::cout << "Result: " << s << '\n';

    return 0;
}
