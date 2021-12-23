#include <iostream>

using namespace std;

int main() {
    double n = 0, z = 0;

    cin >> n;

    while (n > 0) {
        if (n == 1) {
            cout << "YES";
            return 0;
        }
        n /= 3;
    }

    cout << "NO";
}

