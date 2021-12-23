#include <iostream>

using namespace std;

int main() {
    unsigned int y = 0;

    cin >> y;
    cout << ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? "Leap" : "Not leap");
}

