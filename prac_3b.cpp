#include <iostream>

using namespace std;

int main() {
    unsigned long long a = 0, b = 0 , p = 0, c = 0;

    cin >> a >> b >> p;

    while (a < b) {
        a += a*p/100;
        c++;
    }

    cout << c;
}

