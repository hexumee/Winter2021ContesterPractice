#include <iostream>

using namespace std;

int main() {
    unsigned long long n = 0, a = 0, b = 0, c = 0;

    cin >> n >> a >> b;

    for (unsigned int i = 1; i <= n; i++) {
        if (i % a == 0 && i % b != 0) {cout << "Oi!";}
        else if (i % b == 0 && i % a != 0) {cout << "Ai!";}
        else if (i % a == 0 && i % b == 0) {cout << "Oi-ai!";}
        else cout << i;
        cout << " ";
    }
}

