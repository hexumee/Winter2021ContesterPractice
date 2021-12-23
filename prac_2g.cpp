#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;

    cin >> a >> b >> c;

    d = b*b-4*a*c;
    if (d < 0) {
        cout << '0';
        return 0;
    }
    
    x1 = (-b+sqrt(d))/(2*a);
    x2 = (-b-sqrt(d))/(2*a);

    if (x1 == x2) {
        cout << fixed << setprecision(4) << "1\n" << x1;
    } else {
        cout << fixed << setprecision(4) << "2\n" << ((x1 < x2) ? x1 : x2) << " " << ((x1 > x2) ? x1 : x2);
    }
}

