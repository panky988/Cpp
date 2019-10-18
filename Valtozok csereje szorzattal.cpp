#include <iostream>

using namespace std;

int main() {
    int a = 45, b = 5;
    a = a*b;
    b = a/b;
    a = a/b;
    cout << a << "\n" << b;
    return 0;
}
