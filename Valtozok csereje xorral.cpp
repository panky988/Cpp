#include <iostream>
using namespace std;
int main() {
    int a = 4, b = 13;
    a= a xor b;
    b= b xor a;
    a= a xor b;
    cout << a << "\n" << b;
    return 0;
}
