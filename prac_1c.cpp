#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0;

    cin >> a >> b >> c;
    cout << 3*c+(a*b*(c+((a+b)*c)))+(2*a+5*(a*b)+3*(a*b*(c+((a+b)*c))));
}

