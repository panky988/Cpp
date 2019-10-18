#include <iostream>

using namespace std;

int main() {
    int x=9, y=12;
    x += y;
    y =x - y;
    x =x - y;
    cout << x << "\n" << y;
    return 0;
}
