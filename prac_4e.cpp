#include <iostream>

#define BC 1000000007

using namespace std;

unsigned long long da_pow(unsigned long long num, unsigned long long deg) {
    unsigned long long result = 1;

    while (deg) {
        if (deg % 2 == 0) {
            deg /= 2;
            num *= num;
            num %= BC; 
        }
        else {
            deg--;
            result *= num;
            result %= BC;
        }
    }

    return result;
}

int main() {
    unsigned long long a = 0, b = 0;

    cin >> a >> b;
    cout << da_pow(a, b) % BC;
}

