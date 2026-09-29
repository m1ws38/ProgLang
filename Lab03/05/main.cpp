#include <iostream>
#include <vector>

int main() {
    // typedef
    typedef unsigned long long ll;
    ll population = 8000000000LL;

    // auto
    std::vector<int> numbers = {10, 20, 30};
    auto it = numbers.begin();

    // decltype
    int count = 10;
    decltype(count) anotherCount = 20;

    // static_cast
    int sum = 7;
    int amount = 2;
    double average = static_cast<double>(sum) / amount;

    // sizeof
    std::cout << "population = " << population << std::endl;
    std::cout << "first = " << *it << std::endl;
    std::cout << "anotherCount = " << anotherCount << std::endl;
    std::cout << "average = " << average << std::endl;
    std::cout << "sizeof(int) = " << sizeof(int) << std::endl;

    return 0;
}