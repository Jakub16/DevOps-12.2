#include <iostream>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 5;
    int b = 3;
    std::cout << "Suma " << a << " i " << b << " wynosi " << sum(a, b) << std::endl;
    return 0;
}
