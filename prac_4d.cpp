#include <iostream>

using namespace std;

int main() {
    unsigned long long a = 0, b = 0, c = 1;

    cin >> a >> b;

    for (int i = 0; i < b; i++) {
        c *= a;
        c = c % 1000000007;
    }

    cout << c;
}

