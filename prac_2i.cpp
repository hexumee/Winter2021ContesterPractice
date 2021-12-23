#include <iostream>

using namespace std;

int main() {
    unsigned int n = 0;

    cin >> n;
    cout << "u vas " << n << " ";

    if (!(n % 100 >= 11 && n % 100 <= 14) && n % 10 == 1) {
        cout << "drug";
    } else if ((n % 100 >= 11 && n % 100 <= 14) || n % 10 == 0 || (n % 10 >= 5 && n % 10 <= 9)) {
        cout << "druzei";
    } else if (n % 10 >= 2 && n % 10 <= 4) {
        cout << "druga";
    }
}

