#include <iostream>

using namespace std;

int main() {
    int w = 0, h = 0, x = 0, y = 0;

    cin >> w >> h >> x >> y;

    if (abs(h-y) <= min(y, min(x, abs(w-x)))) {
        cout << 'N';
    } else if (y <= min(abs(h-y), min(x, abs(w-x)))) {
        cout << 'S';
    } else if (x <= min(abs(h-y), min(y, abs(w-x)))) {
        cout << 'W';
    } else if (abs(w-x) <= min(abs(h-y), min(x, abs(w-x)))) {
        cout << 'E';
    }
}

