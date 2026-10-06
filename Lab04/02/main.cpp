#include <iostream>

int main() {
    int decimal = 100;
    int octal = 0144;
    int binary = 0b1100100;
    int hexadecimal = 0x64;
    unsigned int u = 100U;
    long int l = 100L;
    unsigned long int ul = 100UL;
    long long int ll = 100LL;
    unsigned long long int ull = 100ULL;
    std::cout << decimal << std::endl;
    std::cout << octal << std::endl;
    std::cout << binary << std::endl;
    std::cout << hexadecimal << std::endl;
    std::cout << u << std::endl;
    std::cout << l << std::endl;
    std::cout << ul << std::endl;
    std::cout << ll << std::endl;
    std::cout << ull << std::endl;
    return 0;
}