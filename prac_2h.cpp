#include <iostream>

using namespace std;

int main() {
    double a = 0, b = 0, c = 0;

    cin >> a >> b >> c;
    cout << ((abs(a+b-c) < 0.00000001) ? "YES" : "NO");
}

