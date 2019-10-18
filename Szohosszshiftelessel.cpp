#include <iostream>

using namespace std;

int main() {
    int a=1, b=0;
    while (a != 0)
	{
       		b++;
        	a = a << 1;
	}
    cout << b;
    return 0;
}
