
#include <iostream>
#include <string>
#include <chrono>

int main() {
    std::string s;

    auto start = std::chrono::steady_clock::now();

    for (int i = 0; i < 1000000; i++) {
        s += 'a';
    }

    auto end = std::chrono::steady_clock::now();

    std::cout << "Size: " << s.size() << '\n';
    std::cout << "Time: "
              << std::chrono::duration<double, std::milli>(end - start).count()
              << " ms\n";

    return 0;
}
