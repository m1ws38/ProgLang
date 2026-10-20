#include <chrono>
#include <iostream>
#include <string>
#include <utility>

using Clock = std::chrono::steady_clock;

template <class Exchange>
long long measure(Exchange exchange) {
    std::string a(100000, 'a');
    std::string b(100000, 'b');
    const auto start = Clock::now();
    for (int i = 0; i < 1000000; ++i) {
        exchange(a, b);
    }
    const auto finish = Clock::now();
    std::cout << a[0] << b[0] << ' ';
    return std::chrono::duration_cast<std::chrono::milliseconds>(finish - start).count();
}

int main() {
    const auto copying = measure([](std::string& a, std::string& b) {
        std::string c(a);
        a = b;
        b = c;
    });
    std::cout << "copy: " << copying << " ms\n";

    const auto swapping = measure([](std::string& a, std::string& b) {
        std::swap(a, b);
    });
    std::cout << "swap: " << swapping << " ms\n";

    const auto moving = measure([](std::string& a, std::string& b) {
        std::string c(std::move(a));
        a = std::move(b);
        b = std::move(c);
    });
    std::cout << "move: " << moving << " ms\n";
}
