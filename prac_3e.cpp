#include <iostream>

using namespace std;

int main() {
    unsigned long long n = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << string(i, '*');
        cout << endl;
    }
}

