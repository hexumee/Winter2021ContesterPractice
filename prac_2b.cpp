#include <iostream>

using namespace std;

int main() {
    unsigned int a = 0, b = 0, c = 0;

    cin >> a >> b >> c;
    cout << ((a+b > c && a+c > b && b+c > a) ? "YES" : "NO");
}

