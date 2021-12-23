#include <iostream>

using namespace std;

int main() {
    unsigned int a = 0, b = 0, c = 0, d = 0;

    cin >> a >> b >> c >> d;
    cout << min(a/1, min(b/3, min(c/2, d/1)));
}

