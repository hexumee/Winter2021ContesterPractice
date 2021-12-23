#include <iostream>

using namespace std;

int main() {
    int n = 0;

    cin >> n;

    int center = n/2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= center) {
                if (j >= center-i && j <= center+i)
                    cout << "*";
                else
                    cout << ".";
            } else {
                if (j >= center+i-n+1 && j <= center-i+n-1)
                    cout << "*";
                else
                    cout << ".";
            }
        }
        cout << endl;
    }
}

