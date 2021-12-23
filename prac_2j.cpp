#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a = 0, b = 0;

    cin >> a >> b;

    a % 2 == 0 ? cout << (long long)ceil(abs(b-a)/2.) : cout << abs(b-a)/2+1;
}

