#include <iostream>

int main() {
    unsigned long long a = 0, s = 0;

    while (std::cin >> a && a != 0) {
        s += a;
    }

    std::cout << s;
}

