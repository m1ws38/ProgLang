#include <iostream>

int main() {
    int s = 0;
    for (int i = 0; i < 4; ++i) {
        for (int i = 0; i < 3; ++i) {
            s += i;
        }
        s += i;
    }
    std::cout << s << '\n';
}
