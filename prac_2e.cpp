#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0;

    cin >> a >> b >> c;
    cout << max(abs(a-b), max(abs(a-c), abs(b-c)));
}

